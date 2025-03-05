#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
    std::string _Name;
    AMateria *_Inventory[4];

public:
    Character();
    Character(std::string name);
    Character(const Character &character);
    ICharacter &operator=(const Character &character);
    ~Character();
    std::string const &getName() const;
    void setName(std::string name);
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};

#endif