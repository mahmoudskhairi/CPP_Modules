#include "FragTrap.hpp"

int main()
{
    std::cout << "\n----------------------------------------------------------------------" << std::endl;
    FragTrap Frag("frag");
    std::cout << "----------------------------------------------------------------------" << std::endl;

    for (int i = 0; i < 8; i++)
        Frag.attack("Zombie");
    Frag.takeDamage(100);
    Frag.takeDamage(1);
    Frag.highFivesGuys();
    std::cout << "#Frag Health points: " << Frag.GetHealth() << std::endl;
    std::cout << "#Frag Energy points: " << Frag.GetEnergie() << std::endl;
}