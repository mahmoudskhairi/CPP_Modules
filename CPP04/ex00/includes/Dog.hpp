#ifndef _Dog_HPP_
#define _Dog_HPP_
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(std::string Type);
    Dog(Dog &New);
    Dog &operator=(Dog &New);
    ~Dog();
    void makeSound(void);
};

#endif
