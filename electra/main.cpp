#include <iostream>
#include <stdlib.h>

#include "electraserver.h"


int main()
{
    std::cout << "electra server" << std::endl;
    
    jsonrpc::HttpServer httpserver(8383);
    ElectraServer s(httpserver);
    s.StartListening();
    sleep(10000000);
    s.StopListening();
    return 0;
}
