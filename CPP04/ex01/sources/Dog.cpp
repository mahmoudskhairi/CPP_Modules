#include "../includes/Dog.hpp"

Dog::Dog() : Animal(), _BrainPtr(new Brain())
{
    std::cout << this->GetType() << ": Default constructor called" << std::endl;
    this->_BrainPtr = new Brain();
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
    /* unnecessary usage of // *this = New;// double initialization of ClapTrap data members */
}

Dog::~Dog()
{
    delete this->_BrainPtr;
    std::cout << this->GetType() << ": destructor called" << std::endl;
}