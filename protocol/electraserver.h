#ifndef ELECTRA_SERVER_H
#define ELECTRA_SERVER_H

#include <jsonrpccpp/server/connectors/httpserver.h>

#include "electraabstractserver.h"

class ElectraServer : public ElectraAbstractServer
{
public:
    ElectraServer(jsonrpc::AbstractServerConnector &connector);

    // For descriptions of each of these methods see the .cpp file.
    Json::Value server_version(const std::string& client_name, const Json::Value& protocol_version) override;
    Json::Value blockchain_address_get_balance(const std::string& address) override;
    Json::Value blockchain_address_get_history(const std::string& address) override;
    Json::Value blockchain_address_get_mempool(const std::string& address) override;
    Json::Value blockchain_address_listunspent(const std::string& address) override;
    std::string blockchain_address_subscribe(const std::string& address) override;
    Json::Value blockchain_block_get_header(int height) override;
    Json::Value blockchain_block_get_chunk(int index) override;
    double blockchain_estimate_fee(int number) override;
    Json::Value blockchain_headers_subscribe() override;
    int blockchain_numblocks_subscribe() override;
    double blockchain_relayfee() override;
    Json::Value blockchain_scripthash_get_balance(const std::string& scripthash) override;
    Json::Value blockchain_scripthash_get_history(const std::string& scripthash) override;
    Json::Value blockchain_scripthash_get_mempool(const std::string& scripthash) override;
    Json::Value blockchain_scripthash_listunspent(const std::string& scripthash) override;
    Json::Value blockchain_scripthash_subscribe(const std::string& scripthash) override;
    std::string blockchain_transaction_broadcast(const std::string& raw_tx) override;
    std::string blockchain_transaction_get(const std::string& tx_hash) override;
    Json::Value blockchain_transaction_get_merkle(int height, const std::string& tx_hash) override;
    Json::Value blockchain_utxo_get_address(int index, const std::string& tx_hash) override;
    void server_add_peer(const Json::Value& features) override;
    std::string server_banner() override;
    std::string server_donation_address() override;
    Json::Value server_features() override;
    Json::Value server_peers_subscribe() override;
};

#endif // ELECTRA_SERVER_H
