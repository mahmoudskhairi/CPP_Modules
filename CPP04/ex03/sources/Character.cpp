#include "../includes/Character.hpp"
#include "../includes/List.hpp"

Character::Character() : _Name("unkown_character")
{
    if (PRINTINGMODE)
        std::cout << "Character Default constructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++)
        this->_Inventory[i] = NULL;
    this->TmpMaterias = new list();
}
Character::Character(std::string name) : _Name(name)
{
    if (PRINTINGMODE)
        std::cout << "Character parameterized constructor called!" << std::endl;
    for (size_t i = 0; i < 4; i++)
        this->_Inventory[i] = NULL;
    this->TmpMaterias = new list();
}
Character::Character(const Character &character)
{
    if (PRINTINGMODE)
        std::cout << "Character Copy constructor called!" << std::endl;
    this->_Name = character.getName();
    this->TmpMaterias = character.TmpMaterias;
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
    if (this->TmpMaterias)
        delete TmpMaterias;
    this->TmpMaterias = character.TmpMaterias;
    if (this != &character)
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
    {
            delete this->_Inventory[i];
            this->_Inventory[i] = NULL;
    }
    delete this->TmpMaterias;
    this->TmpMaterias = NULL;
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
            if (!this->_Inventory[i])
            {
                this->_Inventory[i] = m;
                return;
            }
        }
        std::cerr << "sorry, no space left to equip your materia!" << std::endl;
    }
    std::cerr << "equip error: enter another valid materia please!" << std::endl;
}
void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3 && this->_Inventory[idx])
    {
        this->TmpMaterias->AddElement(this->_Inventory[idx]);
        this->_Inventory[idx] = NULL;

        return;
    }
    std::cerr << "unequip error: try again, there is an issue with you input!" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx <= 3 && this->_Inventory[idx])
    {
        this->_Inventory[idx]->use(target);
        return;
    }
    std::cerr << "use error: try again, there is an issue with you input!" << std::endl;
}