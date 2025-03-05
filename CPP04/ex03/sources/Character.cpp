#include "../includes/Character.hpp"

Character::Character() : _Name("unkown_character")
{
    if (PRINTINGMODE)
        std::cout << "Character Default constructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++)
        this->_Inventory[i] = NULL;
}
Character::Character(std::string name) : _Name(name)
{
    if (PRINTINGMODE)
        std::cout << "Character parameterized constructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++)
        this->_Inventory[i] = NULL;
}
Character::Character(const Character &character)
{
    if (PRINTINGMODE)
        std::cout << "Character Copy constructor called!" << std::endl;
    this->_Name = character.getName();
    for (size_t i = 0; i < 4; i++)
    {
        if (character._Inventory[i])
            this->_Inventory[i] = character._Inventory[i]->clone();
        else
            this->_Inventory[i] = NULL;
    }
}
ICharacter &Character::operator=(const Character &character)
{
    if (PRINTINGMODE)
        std::cout << "Character Copy assignment operator called!" << std::endl;
    if (this != &character) // if character equal NULL!
    {
        this->_Name = character.getName();
        for (size_t i = 0; i < 4; i++)
        {
            if (character._Inventory[i])
            {
                delete _Inventory[i];
                this->_Inventory[i] = character._Inventory[i]->clone();
            }
        }
    }
    return (*this);
}
Character::~Character()
{
    if (PRINTINGMODE)
        std::cout << "Character Destructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++)
        delete this->_Inventory[i];
}
std::string const &Character::getName() const
{
    return (this->_Name);
}
void Character::setName(std::string name)
{
    this->_Name = name;
}
void Character::equip(AMateria *m)
{
    if (m)
    {
        for (size_t i = 0; i < 4; i++)
        {
            if (this->_Inventory[i])
            {
                this->_Inventory[i] = m;
                break;
            }
        }
        return;
    }
    // print error
}
void Character::unequip(int idx)
{

    if (idx >= 0 && idx <= 3 && this->_Inventory[idx])
    {
        static int i = 0;
        static AMateria *tmp[1024]; // linked list ! && leaks
        tmp[i++] = this->_Inventory[idx];
        this->_Inventory[idx] = NULL;
        return;
    }
    // print error
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx <= 3)
    {
        this->_Inventory[idx]->use(target);
        return;
    }
    // print error
}