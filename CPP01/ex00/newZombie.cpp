#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *MyZombie = new Zombie(name);
    return (MyZombie);
}