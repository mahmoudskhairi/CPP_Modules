#include "../includes/Dog.hpp"

Dog::Dog(std::string Type) : Animal(Type)
{
    std::cout << this->GetType() << " constructor called" << std::endl;
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

void Dog::makeSound(void)
{
    std::cout << "Dooog soundddddd!" << std::endl;
}

Dog::Dog(Dog &New) : Animal(New)
{
    /* unnecessary usage of // *this = New;// double initialization of ClapTrap data members */
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}