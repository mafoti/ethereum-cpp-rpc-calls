/*
 * types.h
 *
 *  Created on: Nov 13, 2017
 *      Author: magda
 */

#ifndef TYPES_H_
#define TYPES_H_

#include <string>
#include <vector>

struct transaction{
	std::string hash;
	std::string nonce;
	std::string blockHash;
	std::string blockNumber;
	std::string transactionIndex;
	std::string from;
	std::string to;
	std::string value;
	std::string gas;
	std::string gasPrice;
	std::string input;
};

struct block{
	std::string number;
	std::string hash;
	std::string parentHash;
	std::string nonce;
	std::string sha3Uncles;
	std::string logsBloom;
	std::string transactionsRoot;
	std::string stateRoot;
	std::string miner;
	std::string difficulty;
	std::string totalDifficulty;
	std::string extraData;
	std::string size;
	std::string gasLimit;
	std::string gasUsed;
	std::string timestamp;
	std::vector<transaction> transactions;
	std::vector<std::string> uncles;

};

struct log{
	std::string logIndex;
	std::string blockNumber;
	std::string blockHash;
	std::string transactionHash;
	std::string transactionIndex;
	std::string address;
	std::string data;
	std::vector<std::string> topics;
};


struct transactionReceipt{
	std::string transactionHash;
	std::string transactionIndex;
	std::string blockNumber;
	std::string blockHash;
	std::string cumulativeGasUsed;
	std::string gasUsed;
	std::string contractAddress;
	std::vector<log> logs;
	std::string status;
};


struct filterOptions{
};

struct messages{
	std::string hash;
	std::string from;
	std::string to;
	std::string expiry;
	std::string sent;
	std::string ttl;
	std::vector<std::string> topics;
	std::string payload;
	std::string workProved;
};

#endif /* TYPES_H_ */
