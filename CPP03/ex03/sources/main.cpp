#include "../includes/DiamondTrap.hpp"

int main()
{
    std::cout << "\n----------------------------------------------------------------------" << std::endl;
    DiamondTrap Diamond("mahmoud");
    std::cout << "----------------------------------------------------------------------" << std::endl;

    for (int i = 0; i < 8; i++)
        Diamond.attack("maamoun");
    // Diamond.takeDamage(100);
    // Diamond.takeDamage(1);
    // Diamond.highFivesGuys();
    // std::cout << "#Diamond Health points: " << Diamond.GetHealth() << std::endl;
    // std::cout << "#Diamond Energy points: " << Diamond.GetEnergie() << std::endl;
    Diamond.whoAmI();
}