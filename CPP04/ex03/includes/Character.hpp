#ifndef _CHARACTER_HPP_
#define _CHARACTER_HPP_

#include "ICharacter.hpp"
class Character : public ICharacter
{
private:
public:
    Character();
    Character(Character &Other);
    std::string const &getName() const;
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    ~Character();
};

#endif