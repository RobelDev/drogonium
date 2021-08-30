#include <iostream>
#include <vector>
#include "Block.cpp"

// class Blockchain
// {
//     vector<Block> chain;

//     Blockchain(){
//         chain.push_back(Block::create_genesis())}

//     add_block(string data)
//     {

//         Block block = Block::mine_block(chain.get(chain.size() - 1), data);
//         // chech if block is valid
//         try
//         {
//             bool v = Block::is_valid_block(block);
//         }
//         catch (exception)
//         {
//             cout << "e";
//         }
//     }
// };

int valid(int n)
{
    if (n == 3)
    {
        throw "err";
    }
    else
    {
        cout << "valid" << endl;
        return 0;
    }
}

int main()
{
    vector<string> chain;
    string gene = "chainnn";
    chain.push_back(gene);
    for (string str : chain)
    {
        cout << str << endl;
    }

    try
    {
        if (valid(3) == 0)
        {
            cout << "trueee" << endl;
        }
    }
    catch (exception == "err")
    {
        cout << "exception";
    }
}