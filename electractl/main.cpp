#include <iostream>
#include <jsonrpccpp/client/connectors/httpclient.h>

#include "electraclient.h"


int main()
{
    jsonrpc::HttpClient httpclient("http://localhost:8383");
    ElectraClient c(httpclient);
    try
    {
        /*Json::Value result = */ c.server_features();
        //c.notifyServer();
    }
    catch (jsonrpc::JsonRpcException e)
    {
        std::cerr << e.what() << std::endl;
    }
}
