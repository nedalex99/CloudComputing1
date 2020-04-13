#pragma once

#include <OperationPrint.grpc.pb.h>

class PrintServiceImpl final : public PrintOperationService::Service 
{
public:
	PrintServiceImpl() {};
	::grpc::Status Print(::grpc::ServerContext* context, const ::PrintRequest* request, ::PrintResponse* response) override;
};

