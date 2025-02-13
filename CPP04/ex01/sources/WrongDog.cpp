#include "../includes/WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
    std::cout << this->GetType() << ": Default constructor called" << std::endl;
}
WrongDog::WrongDog(std::string Type) : WrongAnimal(Type)
{
    std::cout << this->GetType() << ": parameterized constructor called" << std::endl;
}
/* unnecessary usage*/
WrongDog &WrongDog::operator=(WrongDog &New)
{
    if (this != &New)
    {
        this->SetType(New.GetType());
    }
    return (*this);
}

void WrongDog::makeSound(void) const
{
    std::cout << "🐶: Wrong Dooog soundddddd!" << std::endl;
}

WrongDog::WrongDog(WrongDog &New) : WrongAnimal(New)
{
    /* unnecessary usage of // *this = New;// double initialization of ClapTrap data members */
}

WrongDog::~WrongDog()
{
    std::cout << this->GetType() << ": destructor called" << std::endl;
}