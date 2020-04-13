#include "PrintServiceImpl.h"

::grpc::Status PrintServiceImpl::Print(::grpc::ServerContext* context, const::PrintRequest* request, ::PrintResponse* response)
{
	std::string name = request->firstoperand();
	response->set_result(name);
	std::cout << "\Hello, " << request->firstoperand() <<"!\n";
	return ::grpc::Status::OK;
}
