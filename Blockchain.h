#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H
#include "Block.h"
#include <string>

class BlockChain{
public :
    BlockChain();
    void AddBlock(Block* New);

private:
    int Difficulty;
};


#endif // BLOCKCHAIN_H
