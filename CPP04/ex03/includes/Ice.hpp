#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(Ice &Copied);
    Ice &operator=(Ice &Assigned);
    void use(ICharacter &target);
    AMateria *clone() const;
    ~Ice();
};