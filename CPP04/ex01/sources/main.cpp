#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Brain.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongDog.hpp"

void deepcopyTesting()
{
    std::cout << "---------[deep copy test:]--------" << std::endl;
    Dog *dog1 = new Dog("one");
    Dog *dog2 = new Dog(*dog1);

    std::cout << "*: " << dog1 << std::endl;
    std::cout << "*: " << dog2 << std::endl;
    *dog1 = *dog2;
    std::cout << "----------------" << std::endl;
    std::cout << "*: " << dog1 << std::endl;
    std::cout << "*: " << dog2 << std::endl;
    // std::cout << "*: " << dog1->GetType() << std::endl;
    // std::cout << "*: " << dog2->GetType() << std::endl;

    delete dog1;
    delete dog2;
    std::cout << "dscdffsfsfsf" << std::endl;
}

int main()
{
    //     size_t count = 4;
    //     Animal *obj[count];
    // size_t i = 0;
    deepcopyTesting();
    // std::cout << "---------[main test for Brains:]--------" << std::endl;
    // for (; i < count / 2; i++)
    //     obj[i] = new Cat("cat");

    // for (; i < count; i++)
    //     obj[i] = new Dog("Dog");

    // i = 0;
    // for (; i < count; i++)
    //     obj[i]->makeSound();
    // for (i = 0; i < count; i++)
    //     delete obj[i];
    // system("leaks -q Brain");
}