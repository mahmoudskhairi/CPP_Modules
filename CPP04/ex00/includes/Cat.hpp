#ifndef _Cat_HPP_
#define _Cat_HPP_
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(std::string Type);
    Cat(Cat &New);
    Cat &operator=(Cat &New);
    ~Cat();
    void makeSound(void) const;
};
#endif