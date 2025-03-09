#include "../includes/Cat.hpp"

Cat::Cat() : Animal(), _BrainPtr(new Brain())
{
    std::cout << this->GetType() << ": Default constructor called" << std::endl;
    // this->_BrainPtr = new Brain();
}

Cat::Cat(std::string Type) : Animal(Type), _BrainPtr(new Brain())
{
    std::cout << this->GetType() << ": parameterized constructor called" << std::endl;
    // this->_BrainPtr = new Brain();
}
/* unnecessary usage*/
Cat &Cat::operator=(Cat &New)
{
    if (this != &New)
    {
        delete this->_BrainPtr;
        this->SetType(New.GetType());
        this->_BrainPtr = new Brain(*New._BrainPtr);
    }
    return (*this);
}
Brain *Cat::GetBrain()
{
    return (this->_BrainPtr);
}
void Cat::makeSound(void) const
{
    std::cout << "😺: Caaaaat soundddddd!" << std::endl;
}

Cat::Cat(Cat &New) : Animal(New)
{
    this->_BrainPtr = new Brain(*New._BrainPtr);
     
}

Cat::~Cat()
{
    delete this->_BrainPtr;
    std::cout << this->GetType() << ": destructor called" << std::endl;
}