#include "Span.hpp"

Span::Span(/* args */): _N(1)
{
    if (PRINTINGMODE)
        std::cout << "Default constructor called!" << std::endl;
}
Span::Span(unsigned int N): _N(N)
{
    if (PRINTINGMODE)
        std::cout << "Parameterized constructor called!" << std::endl;
}
Span::Span(const Span &other)
{
    if (PRINTINGMODE)
        std::cout << "Copy constructor called!" << std::endl;
    *this = other;
}
Span &Span::operator=(const Span &other)
{
    if (PRINTINGMODE)
        std::cout << "Copy assignment operator called!" << std::endl;
    if(this != &other)
    {
        this->_N = other._N;
        this->MyVect = other.MyVect;
    }
    return(*this);
}

Span::~Span()
{
    if (PRINTINGMODE)
        std::cout << "Destructor called!" << std::endl;
}
void    Span::addNumber(int number)
{
    if(this->MyVect.size() == this->_N)
        throw(std::out_of_range("adding of new elemets doesn't allowed !"));
    this->MyVect.push_back(number);
}
// size_t Span::shortestSpan()
// {
// }
size_t Span::longestSpan()
{
    std::sort(MyVect.begin(), MyVect.end());
    std::cout << "distance between " << MyVect.at(0) << " and " << MyVect[_N - 1] << " is : " << MyVect.size() - 2 << std::endl;
    return (MyVect.size() - 2);
}