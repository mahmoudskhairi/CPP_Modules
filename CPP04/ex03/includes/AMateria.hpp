#ifndef _AMATERIA_HPP_
#define _AMATERIA_HPP_
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string _type;

public:
    AMateria();
    AMateria(std::string const &type);
    //[...]
    std::string const &getType() const; // Returns the materia type
    void AMateria::setType(std::string type);
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
    virtual ~AMateria();
};

#endif