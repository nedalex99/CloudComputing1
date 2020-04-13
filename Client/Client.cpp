#include <iostream>

#include <OperationPrint.grpc.pb.h>

#include <grpc/grpc.h>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>

using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReader;
using grpc::ClientReaderWriter;
using grpc::ClientWriter;

int main()
{
	grpc_init();
	ClientContext context;

	auto print_stub = PrintOperationService::NewStub(grpc::CreateChannel("localhost:8888",
		grpc::InsecureChannelCredentials()));
	PrintRequest printRequest;
	std::string firstName;
	std::cout << "\nWhat is your first name?";
	std::cin >> firstName;
	printRequest.set_firstoperand(firstName);
	PrintResponse response;
	auto status = print_stub->Print(&context, printRequest, &response);
	/*if (status.ok())
	{
		std::cout << "Name: " << response.result();
	}*/

	return 0;
}
