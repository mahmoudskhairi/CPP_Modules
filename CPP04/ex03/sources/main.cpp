#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/MateriaSource.hpp"
#include "../includes/IMateriaSource.hpp"

void	subjectTest(){
	std::cout << "------------[ Subject test ]-----------\n" << std::endl;
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
	std::cout << "\n---------------------------------------\n" << std::endl;
}

void	myTest(){
	std::cout << "--------------[ My test ]--------------\n" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("El-Madani");
	ICharacter *enemy = new Character("chiwahed");
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
	me->unequip(2);
	me->use(1, *enemy);
	delete src;
	delete me;
	delete enemy;
	// delete tmp;
	std::cout << "\n---------------------------------------\n" << std::endl;
}

void    ll()
{
    system("leaks -q MagicWorld");
}
int main(void)
{
    atexit(ll);
	std::cout << "\n---------------------------------------\n" << std::endl;
	IMateriaSource *magicBook = new MateriaSource;
    Character *me = new Character();
    me->TmpMaterias = new list();
    magicBook->learnMateria(new Ice());
    magicBook->learnMateria(new Cure());

    AMateria* mycure = magicBook->createMateria("cure");
    AMateria* myice = magicBook->createMateria("ice");
    AMateria* myice2 = magicBook->createMateria("ice");

    std::cout << "type: " << myice->getType() << std::endl;
    std::cout << "type: " <<mycure->getType() << std::endl;

    me->equip(myice);
    me->equip(mycure);
    me->equip(myice2);
    me->unequip(0);
    std::cout << "\n)))))---------------------------------------\n" << std::endl;
    me->unequip(1);
    me->unequip(2);
    // me->unequip(1);
    std::cout << "\n---------------------------------------\n" << std::endl;
    // (void)mycure;
    // (void)myice;
	// subjectTest();
	// myTest();
	// system("leaks -q MagicWorld");
    delete magicBook;
    // delete mycure;
    delete me;
	return 0;
}