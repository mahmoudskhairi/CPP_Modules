#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain: Default constructors called!" << std::endl;
    for (size_t i = 0; i < 100; i++)
    {
        this->ideas[i] = "i will build my own Brain!";
    }
}
Brain::Brain(Brain &New)
{
    std::cout << "Brain: Copy constructors called!" << std::endl;
    *this = New;
}
Brain &Brain::operator=(Brain &New)
{
    std::cout << "Brain: Copy assignment operator called!" << std::endl;
    if (this != &New)
    {
        for (size_t i = 0; i < 100; i++)
        {
            this->ideas[i] = New.ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain: Destructors called!" << std::endl;
}

// setters and getters
std::string Brain::GetIdea(size_t i) const
{
    return (this->ideas[i]);
}
void Brain::SetIdea(std::string Myidea, size_t i)
{
    this->ideas[i] = Myidea;
}