#include "../includes/Character.hpp"

Character::ICharacter::~ICharacter()
{
}
std::string const &Character::ICharacter::getName() const
{
}
void Character::ICharacter::equip(AMateria *m)
{
}
void Character::ICharacter::unequip(int idx)
{
}
void Character::ICharacter::use(int idx, ICharacter &target)
{
}