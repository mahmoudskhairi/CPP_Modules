#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_Inventorys[4];

public:
    MateriaSource();
    MateriaSource(MateriaSource const &obj);
    MateriaSource &operator=(MateriaSource const &obj);
    ~MateriaSource();
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};