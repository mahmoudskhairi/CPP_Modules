#include "../includes/Cat.hpp"

Cat::Cat() : Animal(), _BrainPtr(new Brain())
{
    std::cout << this->GetType() << ": Default constructor called" << std::endl;
    this->_BrainPtr = new Brain();
}

Cat::Cat(std::string Type) : Animal(Type)
{
    std::cout << this->GetType() << ": parameterized constructor called" << std::endl;
    this->_BrainPtr = new Brain();
}
/* unnecessary usage*/
Cat &Cat::operator=(Cat &New)
{
    if (this != &New)
    {
        this->SetType(New.GetType());
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "😺: Caaaaat soundddddd!" << std::endl;
}

Cat::Cat(Cat &New) : Animal(New)
{
    this->_BrainPtr = new Brain(*New._BrainPtr);
    /* unnecessary usage of // *this = New;// double initialization of ClapTrap data members */
}

Cat::~Cat()
{
    delete this->_BrainPtr;
    std::cout << this->GetType() << ": destructor called" << std::endl;
}