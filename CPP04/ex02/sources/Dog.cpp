#include "../includes/Dog.hpp"

Dog::Dog() : Animal(), _BrainPtr(new Brain())
{
    std::cout << this->GetType() << ": Default constructor called" << std::endl;
}
Dog::Dog(std::string Type) : Animal(Type), _BrainPtr(new Brain())
{
    std::cout << this->GetType() << ": parameterized constructor called" << std::endl;
}
/* unnecessary usage*/
Dog &Dog::operator=(Dog &New)
{
    std::cout << "Dog: assignment operator" << std::endl;
    if (this != &New)
    {
        delete (this->_BrainPtr);
        this->SetType(New.GetType());
        this->_BrainPtr = new Brain(*New._BrainPtr);
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "🐶: Dooog soundddddd!" << std::endl;
}

Dog::Dog(Dog &New) : Animal(New)
{
    this->_BrainPtr = new Brain(*New._BrainPtr);
     
}

Brain *Dog::GetBrain()
{
    return (this->_BrainPtr);
}

Dog::~Dog()
{
    delete this->_BrainPtr;
    std::cout << this->GetType() << ": destructor called" << std::endl;
}