#include <iostream>
#include <ctime>
#include <string>
#include <map>

using namespace std;

class Block
{
public:
    size_t index;
    time_t timestamp;
    size_t nonce;
    unsigned short difficulty;
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

    // //void serialize()
    // {
    //     cout << "block serialize" << endl;
    //     // return 0;
    //     // return "hello";
    // }
};

int main()
{
    Block block(0, 1, 4, 1, "prev", "hash", "data");
    cout << "check num" << block.nonce << endl;
}