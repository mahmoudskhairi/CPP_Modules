#ifndef _WRONGDOG_HPP_
#define _WRONGDOG_HPP_
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
public:
    WrongDog();
    WrongDog(std::string Type);
    WrongDog(WrongDog &New);
    WrongDog &operator=(WrongDog &New);
    ~WrongDog();
    void makeSound(void) const;
};
#endif