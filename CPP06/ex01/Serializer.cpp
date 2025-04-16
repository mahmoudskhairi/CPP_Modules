#include "Serializer.hpp"

Serializer::Serializer(/* args */)
{
    if (PRINTINGMODE)
        std::cout << "Default constructor called!" << std::endl;
}


Serializer::Serializer(const Serializer &other)
{
    if (PRINTINGMODE)
        std::cout << "Copy Assignment operator called!" << std::endl;
    (void) other;
}
Serializer &Serializer::operator=(const Serializer &other)
{
    if (PRINTINGMODE)
        std::cout << "Copy constructor called!" << std::endl;
    (void) other;
    return (*this);
}
Serializer::~Serializer()
{
    if (PRINTINGMODE)
        std::cout << "Destructor called!" << std::endl;
}

//static member functions
uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}
Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}