#include "Zombie.hpp"

int main()
{
    std::string name = "";

    /*  dynamic allocation   */
    std::cout << "\n#  the dynamic allocation state  #"
              << std::endl;
    std::cout << "  -Please enter your favorite Zomie Name: "
              << std::flush;
    std::cin >> name;
    if (std::cin.eof())
    {
        std::cerr << "\nEXIT!" << std::endl;
        return(EXIT_FAILURE);
    }
    Zombie *zombie3 = newZombie(name);
    zombie3->announce();
    delete (zombie3);

    /* static allocation Without using randomChump function */

    std::cout << "\n#  the static allocation state Without using randomChump function  #"
              << std::endl;
    std::cout << "  -Please enter your favorite Zomie Name: "
              << std::flush;
    std::cin >> name;
    if (std::cin.eof())
    {
        std::cerr << "\nEXIT!" << std::endl;
        return(EXIT_FAILURE);
    }
    Zombie zombie1(name);
    zombie1.announce();

    /*  static allocation By using randomChump function  */

    std::cout << "\n#  the static allocation state By using randomChump function  #"
              << std::endl;
    std::cout << "  -Please enter your favorite Zomie Name: " << std::flush;
    std::cin >> name;
    if (std::cin.eof())
    {
        std::cerr << "\nEXIT!" << std::endl;
        return(EXIT_FAILURE);
    }
    Zombie zombie2(name);
    zombie2.announce();
}