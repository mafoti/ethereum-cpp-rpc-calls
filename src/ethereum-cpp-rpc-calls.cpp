//============================================================================
// Name        : ethereum-cpp-rpc-calls.cpp
// Author      : Magda Foti
// Description : CPP wrapper for json-rpc calls to ethereum node
//============================================================================

#include <iostream>
#include "ethereumapi.h"
#include <jsonrpccpp/client/connectors/httpclient.h>

using namespace jsonrpc;
using namespace std;

int main()
{
    HttpClient httpclient("http://localhost:8101");
    EthereumAPI c(httpclient);
    try
    {
        cout << c.eth_accounts() << endl;
    }
    catch (JsonRpcException & e)
    {
        cerr << e.what() << endl;
    }
}
