#ifndef _ANIMAL_HPP_
#define _ANIMAL_HPP_

#include <iostream>

class Animal
{
protected:
    std::string _Type;

public:
    Animal();
    Animal(std::string Type);
    Animal(Animal &Copied);
    Animal &operator=(Animal &Assigned);
    virtual ~Animal();
    /* getters and setters */
    std::string GetType() const;
    void SetType(std::string Type);
    /* sound method */
    virtual void makeSound() const;
};

#endif