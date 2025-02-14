#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal: Default constructors called!" << std::endl;
}
WrongAnimal::WrongAnimal(std::string Type) : _Type(Type)
{
    std::cout << "WrongAnimal parameterized constructors called!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &target)
{

    std::cout << "WrongAnimal: Copy constructor called" << std::endl;
    *this = target;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &Assigned)
{
    std::cout << "WrongAnimal: Copy Assignment Operator called" << std::endl;
    if (this != &Assigned)
        this->SetType(Assigned.GetType());
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "🤷: i am Wrong Animaaaaal!!" << std::endl;
}

/* getters and setters */
void WrongAnimal::SetType(std::string Type)
{
    this->_Type = Type;
}
std::string WrongAnimal::GetType() const
{
    return (this->_Type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: Destructor called" << std::endl;
}