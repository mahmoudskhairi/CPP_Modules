#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <iostream>

class Zombie
{
private:
    std::string _Name;

public:
    Zombie(std::string Name);
    ~Zombie();
    void announce(void);
};
Zombie *newZombie(std::string name);
void randomChump(std::string name);
#endif