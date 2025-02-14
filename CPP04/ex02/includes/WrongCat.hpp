#ifndef _WRONGCAT_HPP_
#define _WRONGCAT_HPP_
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(std::string Type);
    WrongCat(WrongCat &New);
    WrongCat &operator=(WrongCat &New);
    ~WrongCat();
    void makeSound(void) const;
};
#endif