#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"

int main()
{
    Ice *ice = new Ice();
    std::cout << ice->getType() << std::endl;
}