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
size_t Span::shortestSpan()
{
    if (MyVect.size() < 2)
        throw std::logic_error("Sorry, the size of your vector must be more than one element !");
    int min_diff = std::abs(MyVect[1] - MyVect[0]);
    for (std::vector<int>::iterator it = MyVect.begin(); it != MyVect.end(); it++)
    {
        if (it + 1 != MyVect.end())
            if(*(it + 1) - *it < min_diff)
                min_diff = std::abs(*(it + 1) - *it);
    }
    return min_diff;
}
size_t Span::longestSpan()
{
    if (MyVect.size() < 2)
        throw std::logic_error("Sorry, the size of your vector must be more than one element !");
    int min = *std::min_element(MyVect.begin(), MyVect.end());
    int max = *std::max_element(MyVect.begin(), MyVect.end());
    return (max - min);
}