// Umi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

#include "improbable/spatialos/deployment/v1alpha1/deployment.grpc.pb.h"
#include "improbable/spatialos/deployment/v1alpha1/deployment.pb.h"
#include <grpcpp/grpcpp.h>
#include <fstream>
#include <string>
#include <chrono>
#include <thread>


std::string readFileToString(const std::string filePath)
{
	std::ifstream ifs(filePath);
	std::string content((std::istreambuf_iterator<char>(ifs)),
		(std::istreambuf_iterator<char>()));
	return content;
}

void checkAndDelete(const std::string project_name, improbable::spatialos::deployment::v1alpha1::DeploymentService::Stub d_stub)
{
	grpc::ClientContext context;
	google::longrunning::Operation response;
	auto ld_res = improbable::spatialos::deployment::v1alpha1::ListDeploymentsResponse();

	//准备请求参数
	auto ld_req = improbable::spatialos::deployment::v1alpha1::ListDeploymentsRequest();
	ld_req.set_project_name(project_name);
	ld_req.set_deployment_stopped_status_filter(improbable::spatialos::deployment::v1alpha1::ListDeploymentsRequest::NOT_STOPPED_DEPLOYMENTS);

	//列出所有部署
	d_stub.ListDeployments(&context, ld_req, &ld_res);

	//遍历所有部署
	google::protobuf::RepeatedPtrField<improbable::spatialos::deployment::v1alpha1::Deployment> deployment_list = ld_res.deployments();
	for (auto it = deployment_list.begin(); it != deployment_list.end(); it++)
	{
		auto dp = *it;
		grpc::ClientContext inner_context;

		if (project_name == dp.project_name())
		{
			std::cout << "Project found!";
			auto delet_req = improbable::spatialos::deployment::v1alpha1::DeleteDeploymentRequest();
			delet_req.set_id(dp.id());

			//删除当前部署
			d_stub.DeleteDeployment(&inner_context, delet_req, &response);
		}
	}
}

void createDeployment(const std::string project_name, std::string launch_config_path, improbable::spatialos::deployment::v1alpha1::DeploymentService::Stub d_stub)
{
	grpc::ClientContext context;
	google::longrunning::Operation op;

	context.set_wait_for_ready(true);


	// 准备请求参数
	auto cd_req = improbable::spatialos::deployment::v1alpha1::CreateDeploymentRequest();
	std::string content = readFileToString(launch_config_path);
	auto* dlp = new improbable::spatialos::deployment::v1alpha1::Deployment();
	auto* launch_config = new improbable::spatialos::deployment::v1alpha1::LaunchConfig();
	launch_config->set_config_json(content);
	dlp->set_project_name(project_name);
	// put ip in the name
	dlp->set_name("test_local_deployment");
	dlp->set_allocated_launch_config(launch_config);
	dlp->set_runtime_version("0.4.3");
	cd_req.set_allocated_deployment(dlp);

	
	//创建部署
	grpc::Status status = d_stub.CreateDeployment(&context, cd_req, &op);
	while (!op.done()) {
		std::cout << op.has_response();
		std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	}

	std::cout << "12344556";
	
}

int main()
{
	const std::string project_name = "unreal_gdk_starter_project";
	grpc::ChannelArguments args;
	improbable::spatialos::deployment::v1alpha1::DeploymentService::Stub d_stub = improbable::spatialos::deployment::v1alpha1::DeploymentService::Stub(grpc::CreateCustomChannel(
		"localhost:9876", grpc::InsecureChannelCredentials(), args));

	checkAndDelete(project_name, d_stub);

	std::string launch_path = "C:\\UE\\423UEGDK010\\UnrealEngine\\Samples\\ClientTravelProject\\spatial\\default_launch.json";
	createDeployment(project_name, launch_path, d_stub);

}
