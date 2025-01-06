#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie MyZombie(name);
    MyZombie.announce();
}