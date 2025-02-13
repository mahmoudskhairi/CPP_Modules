#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Brain.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongDog.hpp"

int main()
{
    size_t count = 4;
    Animal *obj[count];
    size_t i = 0;
    for (; i < count / 2; i++)
        obj[i] = new Cat("cat");

    for (; i < count; i++)
        obj[i] = new Dog("Dog");

    i = 0;
    for (; i < count; i++)
        obj[i]->makeSound();
}