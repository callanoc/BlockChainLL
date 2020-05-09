#include <iostream>
#include "Block.h"
#include <string>
#include <sstream>
#include "sha256.h"

Block::Block()
{
    Nonce=0;
    hash="";
    prev_hash="";
    prev=nullptr;
    next=nullptr;
}
std::string Block::getPrevHash()
{
    if(this->prev)
    {
        prev_hash=this->prev->hash;
        return this->prev->hash;
    }
    else
        return "";
}
std::string Block::calculateHash()
{
    std::stringstream ss;
    ss<<Index<<prev_hash<<time<<Data<<Nonce;
    return (sha256(ss.str()));
}

void Block::MineBlock(int Difficulty)
{
    char beginning[Difficulty+1];
    for(int i=0;i<Difficulty;i++)
    {
        beginning[i]='0';
    }
    beginning[Difficulty]='\0';

    std::string final;
    do{
        Nonce++;
        hash=calculateHash();
    }while(final.substr(0,Difficulty)!=beginning);

    std::cout<<"Mining Block ....."<<hash<<std::endl;
}
