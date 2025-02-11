#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << this->GetType() << ": Default constructor called" << std::endl;
}

Cat::Cat(std::string Type) : Animal(Type)
{
    std::cout << this->GetType() << ": parameterized constructor called" << std::endl;
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
    /* unnecessary usage of // *this = New;// double initialization of ClapTrap data members */
}

Cat::~Cat()
{
    std::cout << this->GetType() << ": destructor called" << std::endl;
}