#ifndef BLOCK_H
#define BLOCK_H
#include <string>

class Block{
public:
    std::string hash;
    Block *next;
    Block *prev;
    std::string prev_hash;

    Block();

    void MineBlock(int Difficulty);
    std::string calculateHash();
    std::string getPrevHash();
private:
    int Index;
    std::string Data;
    int Nonce;
    time_t time;
};

#endif // BLOCK_H
