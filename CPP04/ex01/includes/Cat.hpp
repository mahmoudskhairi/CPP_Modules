#ifndef _Cat_HPP_
#define _Cat_HPP_
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *_BrainPtr;

public:
    Cat();
    Cat(std::string Type);
    Cat(Cat &New);
    Cat &operator=(Cat &New);
    ~Cat();
    void makeSound(void) const;
};
#endif