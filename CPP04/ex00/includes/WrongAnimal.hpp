#ifndef _WRONGANIMAL_HPP_
#define _WRONGANIMAL_HPP_

#include <iostream>

class WrongAnimal
{
protected:
    std::string _Type;

public:
    WrongAnimal();
    WrongAnimal(std::string Type);
    WrongAnimal(WrongAnimal &Copied);
    WrongAnimal &operator=(WrongAnimal &Assigned);
    ~WrongAnimal();
    /* getters and setters */
    std::string GetType() const;
    void SetType(std::string Type);
    /* sound method */
    void makeSound() const;
};

#endif