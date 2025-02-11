#include "../includes/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructors called!" << std::endl;
}
Animal::Animal(std::string Type) : _Type(Type)
{
    std::cout << "Animal parameterized constructors called!" << std::endl;
}

Animal::Animal(Animal &target)
{

    std::cout << "Animal Copy constructor called" << std::endl;
    *this = target;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal &Animal::operator=(Animal &Assigned)
{
    std::cout << "Animal Copy Assignment Operator called" << std::endl;
    if (this != &Assigned)
        this->SetType(Assigned.GetType());
    return (*this);
}

void Animal::makeSound()
{
    std::cout << "i am Animaaaaal!!" << std::endl;
}

/* getters and setters */
void Animal::SetType(std::string Type)
{
    this->_Type = Type;
}
std::string Animal::GetType()
{
    return (this->_Type);
}
