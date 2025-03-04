#ifndef _ICE_HPP_
#define _ICE_HPP_

#include "AMateria.hpp"
class Ice : public AMateria
{
public:
    Ice();
    Ice(std::string type);
    Ice(const Ice &ice);
    Ice &operator=(const Ice &ice);
    Ice *clone() const;
    void use(ICharacter &target);
    ~Ice();
};
#endif