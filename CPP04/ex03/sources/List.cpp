#include "../includes/List.hpp"
// element struct implementation

element::element()
{
    if (PRINTINGMODE)
        std::cout << "element  constructor called!" << std::endl;
    this->_materia = NULL;
    this->_next = NULL;
}

element::~element()
{
    if (PRINTINGMODE)
        std::cout << "element  destructor called!" << std::endl;
    delete this->_materia;
    this->_materia = NULL;
}

// list struct implementation
list::list()
{
    if (PRINTINGMODE)
        std::cout << "List constructor called!" << std::endl;
    this->listptr = NULL;
}

list::~list()
{
    if (PRINTINGMODE)
        std::cout << "List destructor called!" << std::endl;
    element *tmp;
    while (this->listptr)
    {
        tmp = this->listptr;
        this->listptr = this->listptr->_next;
        delete tmp;
    }
}
void list::AddElement(AMateria *New)
{
    if (!this->listptr)
    {
        this->listptr = new (element);
        listptr->_materia = New;
    }
    else
    {
        element *tmp = this->listptr;
        while (tmp)
        {
            if (!tmp->_next)
            {
                tmp->_next = new (element);
                tmp->_next->_materia = New;
                break;
            }
            tmp = tmp->_next;
        }
    }
}
