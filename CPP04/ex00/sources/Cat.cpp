#include "../includes/Cat.hpp"

Cat::Cat(std::string Type) : Animal(Type)
{
    std::cout << this->GetType() << " constructor called" << std::endl;
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

void Cat::makeSound(void)
{
    std::cout << "Caaaaat soundddddd!" << std::endl;
}

Cat::Cat(Cat &New) : Animal(New)
{
    /* unnecessary usage of // *this = New;// double initialization of ClapTrap data members */
}

Cat::~Cat()
{
    std::cout << " Cat destructor called" << std::endl;
}