#include "AMateria.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(Cure &Copied);
    Cure &operator=(Cure &Assigned);
    void use(ICharacter &target);
    AMateria *clone() const;
    ~Cure();
};