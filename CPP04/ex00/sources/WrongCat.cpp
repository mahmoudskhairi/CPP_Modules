#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << this->GetType() << ": Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string Type) : WrongAnimal(Type)
{
    std::cout << this->GetType() << ": parameterized constructor called" << std::endl;
}
/* unnecessary usage*/
WrongCat &WrongCat::operator=(WrongCat &New)
{
    if (this != &New)
    {
        this->SetType(New.GetType());
    }
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "😺: Wrong Caaaaat soundddddd!" << std::endl;
}

WrongCat::WrongCat(WrongCat &New) : WrongAnimal(New)
{
    /* unnecessary usage of // *this = New;// double initialization of ClapTrap data members */
}

WrongCat::~WrongCat()
{
    std::cout << this->GetType() << ": destructor called" << std::endl;
}