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
void magic1()
{
	std::cout << "\n--------------------------------*( magic test1 )*\n" << std::endl;
	IMateriaSource *magicBook = new MateriaSource;
    Character *me = new Character();
    magicBook->learnMateria(new Ice());
    magicBook->learnMateria(new Cure());
    Cure *mahic =new Cure();

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

    Character *mew = new Character();
	mew->equip(mahic);
	mew->unequip(0);
	mew = me;
	std::cout << "name: " << mew->getName() << std::endl;
    delete magicBook;
    delete mew;
    delete me;
}
void	magic2(){
		std::cout << "\n--------------------------------*( magic test2 )*\n" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Cure *mycure = new Cure();
	src->learnMateria(mycure);
	Character* me = new Character("El-Madani");
	Character *enemy = new Character("chiwahed");
	for (size_t i = 0; i < 4; i++)
	{
		if (i % 2 != 0){
			AMateria* tmp = src->createMateria("ice");
			me->equip(tmp);
		}
		else {
			AMateria* tmp = src->createMateria("cure");
			me->equip(tmp);
		}
	}
	AMateria* tmp = src->createMateria("ice");
	me->equip(tmp);
	me->use(0, *enemy);
	me->use(1, *enemy);
	me->unequip(0);
	me->unequip(1);
	me->use(1, *enemy);
	me->unequip(2);
	delete src;
	delete me;
	delete enemy;
	delete mycure;
	delete tmp;
}

void    ll()
{
    system("leaks -q MagicWorld");
}
int main(void)
{
	std::cout << "|\n--------------[ Welcome to our magic world ]------------------|\n" << std::endl;
    atexit(ll);
	subjectTest();
	magic1();
	// magic2();
	std::cout << "\n|--------------------------------------------------------------|\n" << std::endl;
	return 0;
}