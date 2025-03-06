#include "../includes/List.hpp"
list::list()
{
    if (PRINTINGMODE)
        std::cout << "List constructor called!" << std::endl;
}
list::list(list &list)
{
    std::cout << "List copy constructor called!" << std::endl;
}
list::~list()
{
    std::cout << "List destructor called!" << std::endl;
}
list &list::operator=(list const &list)
{
    std::cout << "List copy assignment operator called!" << std::endl;
}
void list::AddElement(AMateria *New)
{
    if (!New)
        return;
    if (!this->listptr)
    {
        this->listptr = new (element);
        listptr->_materia = New;
        listptr->_next = NULL;
        return;
    }
    element *tmp = this->listptr;
    for (; tmp; tmp = tmp->_next)
    {
        if (!tmp)
            tmp->_materia = New;
    }
}