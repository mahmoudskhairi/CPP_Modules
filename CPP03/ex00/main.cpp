#include "ClapTrap.hpp"

int main()
{
    std::cout << "\n----------------------------------------------------------------------" << std::endl;
    ClapTrap clap1("clap1");
    std::cout << "----------------------------------------------------------------------" << std::endl;

    for (int i = 0; i < 6; i++)
    {
        clap1.attack("zombie");
        std::cout << "#clap1 Health points: " << clap1.GetHealth() << std::endl;
        std::cout << "#clap1 Energy points: " << clap1.GetEnergie() << std::endl;
    }
    for (int i = 0; i < 4; i++)
    {
        clap1.takeDamage(3);
        std::cout << "#clap1 Health points: " << clap1.GetHealth() << std::endl;
        std::cout << "#clap1 Energy points: " << clap1.GetEnergie() << std::endl;
    }
    std::cout << "----------------------------------------------------------------------" << std::endl;
    ClapTrap clap2("clap2");
    std::cout << "----------------------------------------------------------------------" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        clap2.attack("zombie");
        std::cout << "#clap2 Health points: " << clap2.GetHealth() << std::endl;
        std::cout << "#clap2 Energy points: " << clap2.GetEnergie() << std::endl;
    }
    for (int i = 0; i < 4; i++)
    {
        clap2.takeDamage(1);
        std::cout << "#clap2 Health points: " << clap2.GetHealth() << std::endl;
        std::cout << "#clap2 Energy points: " << clap2.GetEnergie() << std::endl;
    }
    for (int i = 0; i < 4; i++)
    {
        clap2.beRepaired(3);
        std::cout << "#clap2 Health points: " << clap2.GetHealth() << std::endl;
        std::cout << "#clap2 Energy points: " << clap2.GetEnergie() << std::endl;
    }
    clap2.takeDamage(20);
    // clap2.attack("zombie");
    std::cout << "#clap2 Health points: " << clap2.GetHealth() << std::endl;
    std::cout << "#clap2 Energy points: " << clap2.GetEnergie() << std::endl;
}