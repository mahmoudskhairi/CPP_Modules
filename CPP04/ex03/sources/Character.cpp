#include "../includes/Character.hpp"

Character::Character()
{
}
Character::Character(Character &Other)
{
}
Character::~Character()
{
}
std::string const &Character::getName() const
{
}
void Character::equip(AMateria *m)
{
}
void Character::unequip(int idx)
{
}
void Character::use(int idx, ICharacter &target)
{
}