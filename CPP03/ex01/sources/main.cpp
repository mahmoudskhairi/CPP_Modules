#include "../includes/ScavTrap.hpp"

int main()
{
    std::cout << "\n----------------------------------------------------------------------" << std::endl;
    ScavTrap Scav1("Scav1");
    std::cout << "----------------------------------------------------------------------" << std::endl;

    for (int i = 0; i < 8; i++)
        Scav1.attack("Zombie");
    Scav1.takeDamage(100);
    Scav1.guardGate();
    Scav1.takeDamage(1);
    // Scav2.attack("zombie");
    std::cout << "#Scav1 Health points: " << Scav1.GetHealth() << std::endl;
    std::cout << "#Scav1 Energy points: " << Scav1.GetEnergie() << std::endl;
}