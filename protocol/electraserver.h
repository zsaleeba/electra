#ifndef ELECTRA_SERVER_H
#define ELECTRA_SERVER_H

#include "electraabstractserver.h"
#include <jsonrpccpp/server/connectors/httpserver.h>

class ElectraServer : public ElectraAbstractServer
{
    public:
        ElectraServer(jsonrpc::AbstractServerConnector &connector);

        virtual void notifyServer();
        virtual std::string sayHello(const std::string& name);
};

#endif // ELECTRA_SERVER_H
