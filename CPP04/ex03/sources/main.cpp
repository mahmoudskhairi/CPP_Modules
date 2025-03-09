#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/IMateriaSource.hpp"

void	subjectTest(){
	std::cout << "\n--------------------------------*( subjectTest )*\n" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}
void magic()
{
	std::cout << "\n--------------------------------*( magic world test )*\n" << std::endl;
	IMateriaSource *magicBook = new MateriaSource;
    ICharacter *me = new Character();
    magicBook->learnMateria(new Ice());
    magicBook->learnMateria(new Cure());

    AMateria* mycure = magicBook->createMateria("cure");
    AMateria* myice = magicBook->createMateria("ice");
    AMateria* myice2 = magicBook->createMateria("ice");

    std::cout << "type: " << myice->getType() << std::endl;
    std::cout << "type: " <<mycure->getType() << std::endl;

    // std::cout << "------------" << std::endl;
    std::cout << "# equip test\n" << std::endl;
    me->equip(myice);
    me->equip(mycure);
    me->equip(myice2);

    // std::cout << "------------" << std::endl;
    std::cout << "# uequip test\n" << std::endl;
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    me->unequip(3);

    delete magicBook;
    delete me;
}

// void    ll()
// {
//     system("leaks -q MagicWorld");
// }
int main(void)
{
    // atexit(ll);
	std::cout << "\n|--------------[ Welcome to our magic world ]------------------|\n" << std::endl;
	// subjectTest();
	magic();
	std::cout << "\n|--------------------------------------------------------------|\n" << std::endl;
	return 0;
}