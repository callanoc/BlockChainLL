#include "Blockchain.h"
#include "Block.h"

Block *head=new Block();
Block *tail=new Block();
Block *last;

BlockChain::BlockChain()
{
    Difficulty=3;
    head->next=tail;
    tail->prev=head;
    last=head;
}

void BlockChain::AddBlock(Block *New)
{
   New->prev_hash=New->Block::getPrevHash();
   New->Block::MineBlock(Difficulty);
   New->prev=last;
   New->next=tail;
   last->next=New;
   tail->prev=New;
   last=New;
}
