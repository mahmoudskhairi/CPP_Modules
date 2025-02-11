#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongDog.hpp"

int main()
{
    std::cout << "========================================" << std::endl;
    std::cout << "# Right Animals tests #" << std::endl;
    Animal *animal = new Animal();
    Animal *dog = new Dog();
    Animal *cat = new Cat();
    animal->makeSound();
    cat->makeSound();
    dog->makeSound();
    std::cout << "========================================" << std::endl;
    std::cout << "# Wrong Animals tests #" << std::endl;
    WrongAnimal *Wronganimal = new WrongAnimal();
    WrongAnimal *Wrongdog = new WrongDog();
    WrongAnimal *Wrongcat = new WrongCat();
    Wronganimal->makeSound();
    Wrongcat->makeSound();
    Wrongdog->makeSound();
    std::cout << "========================================" << std::endl;
    delete animal;
    delete cat;
    delete dog;
    delete Wronganimal;
    delete Wrongcat;
    delete Wrongdog;
}