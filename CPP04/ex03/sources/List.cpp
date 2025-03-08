#include "../includes/List.hpp"
// element struct implementation

element::element()
{
    if (PRINTINGMODE)
        std::cout << "element  constructor called!" << std::endl;
}

element::~element()
{
    if (PRINTINGMODE)
        std::cout << "element  destructor called!" << std::endl;
    delete this->_materia;
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
    // if (PRINTINGMODE)
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
    std::cout << "start list call --------------------\n";
    if (!this->listptr)
    {
        this->listptr = new (element);
        std::cout <<  "#add element 1111" << std::endl;
        listptr->_materia = New;
        listptr->_next = NULL;
    }
    else
    {
        std::cout <<  "#add element 2222" << std::endl;
        element *tmp = this->listptr;
        while (tmp)
        {
            if (!tmp->_next)
            {
                tmp->_next = new (element);
                tmp->_next->_materia = New;
                tmp->_next->_next = NULL;
                break;
            }
            tmp = tmp->_next;
        }
    }
    std::cout << "end list call --------------------\n";
}
// }

// void list::DeleteList()
// {
//     element *tmp = this->listptr;
//     for (; tmp; tmp = tmp->_next)
//     {
//         delete tmp->~element(); // assigning of NULL
//     }
// }