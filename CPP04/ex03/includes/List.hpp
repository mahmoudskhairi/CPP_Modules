#ifndef _LIST_HPP_
#define _LIST_HPP_

#include "AMateria.hpp"
struct element
{
    public:
    element *_next;
    AMateria *_materia;
    element();
    ~element();
};

struct list
{
    element *listptr;
    public:
    list();
    ~list();
    void    AddElement(AMateria *New);
};

#endif