#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain: Default constructors called!" << std::endl;
}
Brain::Brain(Brain &New)
{
    *this = New;
    std::cout << "Brain: Copy constructors called!" << std::endl;
}
Brain &Brain::operator=(Brain &New)
{
    if (this != &New)
    {
        for (size_t i = 0; i < 100; i++)
        {
            this->ideas[i] = New.ideas[i];
        }
    }
    std::cout << "Brain: Copy assignment operator called!" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain: Destructors called!" << std::endl;
}