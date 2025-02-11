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
    ~Animal();
    /* getters and setters */
    std::string GetType();
    void SetType(std::string Type);
    /* sound method */
    void makeSound();
};

#endif