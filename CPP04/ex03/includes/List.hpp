#ifndef _LIST_HPP_
#define _LIST_HPP_

#include "AMateria.hpp"
struct element
{
    element *_next;
    AMateria *_materia;
    element();
    ~element();
};

struct list
{
    element *listptr;
    list();
    ~list();
    void AddElement(AMateria *New);
    void DeleteList();
};

#endif