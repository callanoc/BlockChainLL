#include <iostream>
#include "Block.h"
#include "Blockchain.h"
#include <iostream>

int main()
{
    BlockChain Chain=BlockChain();
    Block *b1= new Block();
    Block *b2= new Block();
    Block *b3= new Block();

    std::cout<<"mining ..."<<std::endl;
    Chain.AddBlock(b1);
    Chain.AddBlock(b2);
    Chain.AddBlock(b3);
}
