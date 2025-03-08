#ifndef _AMATERIA_HPP_
#define _AMATERIA_HPP_
#include <iostream>
#include "ICharacter.hpp"

#ifndef PRINTINGMODE
#define PRINTINGMODE 1
#endif
class AMateria // abstruct class is an uncomplete class, so we cannot instantiated
{
protected:
    std::string _type;

public:
    AMateria();
    AMateria(std::string const &type);
    AMateria(const AMateria &Obj);
    //[...]
    AMateria &operator=(const AMateria &Obj);
    std::string const &getType() const; // Returns the materia type
    void setType(std::string type);
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
    virtual ~AMateria();
};

#endif