#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << this->GetType() << ": Default constructor called" << std::endl;
}
Dog::Dog(std::string Type) : Animal(Type)
{
    std::cout << this->GetType() << ": parameterized constructor called" << std::endl;
}
/* unnecessary usage*/
Dog &Dog::operator=(Dog &New)
{
    if (this != &New)
    {
        this->SetType(New.GetType());
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "🐶: Dooog soundddddd!" << std::endl;
}

Dog::Dog(Dog &New) : Animal(New)
{
     
}

Dog::~Dog()
{
    std::cout << this->GetType() << ": destructor called" << std::endl;
}