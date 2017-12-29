#include <iostream>
#include <jsonrpccpp/server/connectors/httpserver.h>

#include "electraserver.h"
#include "electraabstractserver.h"


ElectraServer::ElectraServer(jsonrpc::AbstractServerConnector &connector) :
    ElectraAbstractServer(connector)
{
}

void ElectraServer::notifyServer()
{
    std::cout << "Server got notified" << std::endl;
}

std::string ElectraServer::sayHello(const std::string &name)
{
    return "Hello " + name;
}
