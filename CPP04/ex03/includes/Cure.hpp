#ifndef _CURE_HPP_
#define _CURE_HPP_

#include "AMateria.hpp"
class Cure : public AMateria
{
public:
    Cure();
    Cure(const Cure &cure);
    Cure &operator=(const Cure &cure);
    Cure *clone() const;
    void use(ICharacter &target);
    ~Cure();
};
#endif