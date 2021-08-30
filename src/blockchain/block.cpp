#include <iostream>
#include <ctime>
#include <string>
#include <map>
// #include <drogon/HttpSimpleController.h>
//jsoncpp::Json::Value res;

using namespace std;

class Block
{
public:
    size_t index;
    size_t timestamp;
    size_t nonce;
    size_t difficulty;
    string previous_hash;
    string hash;
    string data;
    // string validator;
    // string signature;

    Block(size_t index, time_t timestamp, size_t nonce, unsigned short difficulty,
          string previous_hash, string hash, string data)
    {
        this->index = index;
        this->timestamp = timestamp;
        this->nonce = nonce;
        this->difficulty = difficulty;
        this->previous_hash = previous_hash;
        this->hash = hash;
        this->data = data;
    }

    static string mine_block(Block previous_block, string data)
    {
        return "mine_block_fun";
    }

    static Block create_genesis()
    {
        return Block(0, 0, 1, 1,
                     "genesis_prev_hash", "genesis_hash", "genesis_data");
    }

    //to-do
    static bool is_valid_block()
    {
        return false;
    }
};

// overload the operator "<<". and the left side is cout
// which is ostream& output reference, and the object of Block block
ostream &
operator<<(ostream &output, Block block)
{
    output << "index : " << block.index << endl
           << "timestamp : " << block.timestamp << endl
           << "nonce : " << block.nonce << endl
           << "difficulty : " << block.difficulty << endl
           << "previous_hash : " << block.previous_hash << endl
           << "hash : " << block.hash << endl
           << "data : " << block.data << endl;

    return output;
};

int main1()
{

    Block block(0, 1, 4, 1, "prev", "hash", "data");

    cout << "block" << block << endl;

    cout << "------------------------------------" << endl;

    cout << "gennesis block: " << (Block::create_genesis()) << endl;

    cout << "------------------------------------" << endl;
    return 0;
}
