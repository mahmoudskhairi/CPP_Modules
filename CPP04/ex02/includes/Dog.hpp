#ifndef _Dog_HPP_
#define _Dog_HPP_
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *_BrainPtr;

public:
    Dog();
    Dog(std::string Type);
    Dog(Dog &New);
    Brain *GetBrain();
    Dog &operator=(Dog &New);
    ~Dog();
    void makeSound(void) const;
};

#endif
