#include <iostream>
#include <jsonrpccpp/server/connectors/httpserver.h>

#include "electraclient.h"


int main()
{
    jsonrpc::HttpClient httpclient("http://localhost:8383");
    ElectraClient c(httpclient);
    try
    {
        std::cout << c.sayHello("Peter") << std::endl;
        c.notifyServer();
    }
    catch (jsonrpc::JsonRpcException e)
    {
        std::cerr << e.what() << std::endl;
    }
}
