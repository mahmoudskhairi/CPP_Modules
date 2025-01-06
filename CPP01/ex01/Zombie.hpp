#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <iostream>

class Zombie
{
private:
    std::string _ZombieName;

public:
    Zombie();
    // Zombie(std::string name);
    ~Zombie();
    void Announce(void);
    void SetName(std::string Name);
};

Zombie *zombieHorde(int N, std::string name);
#endif