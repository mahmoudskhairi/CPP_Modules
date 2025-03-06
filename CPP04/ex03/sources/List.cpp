#include "../includes/List.hpp"
// element struct implementation

element::element()
{
    if (PRINTINGMODE)
        std::cout << "element  destructor called!" << std::endl;
}

element::~element()
{
    if (PRINTINGMODE)
        std::cout << "element  destructor called!" << std::endl;
}

// list struct implementation
list::list()
{
    if (PRINTINGMODE)
        std::cout << "List constructor called!" << std::endl;
}

list::~list()
{
    if (PRINTINGMODE)
        std::cout << "List destructor called!" << std::endl;
    for (; listptr; listptr = listptr->_next)
    {
        delete listptr->_materia; // assigning of NULL
        delete listptr;
    }
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

// void list::DeleteList()
// {
//     element *tmp = this->listptr;
//     for (; tmp; tmp = tmp->_next)
//     {
//         delete tmp->~element(); // assigning of NULL
//     }
// }