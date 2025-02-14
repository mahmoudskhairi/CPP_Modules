#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Brain.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongDog.hpp"

void deepcopyTesting()
{
    std::cout << "---------[deep copy test:]--------" << std::endl;
    Dog *dog1 = new Dog("one");
    dog1->makeSound();
    Dog *dog2 = new Dog(*dog1);
    dog2->makeSound();
    std::cout << "*Delete" << std::endl;
    delete dog1;
    delete dog2;
}

// void    ll()
// {
//     system("leaks -q Brain");
// }

int main()
{
    // size_t count = 4;
    // Animal *obj[count];
    // size_t i = 0;
    // Animal an("la");cannot declare variable ‘an’ to be of abstract type ‘Animal’
    deepcopyTesting();
    // atexit(ll);
    std::cout << "---------[main test for Brains:]--------" << std::endl;
    // for (; i < count / 2; i++)
    //     obj[i] = new Cat("cat");

    // for (; i < count; i++)
    //     obj[i] = new Dog("Dog");

    // i = 0;
    // for (; i < count / 2; i++)
    //     obj[i]->makeSound();
    // for (; i < count; i++)
    //     obj[i]->makeSound();
    // for (i = 0; i < count; i++)
    //     delete obj[i];
}