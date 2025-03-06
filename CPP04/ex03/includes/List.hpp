#ifndef _LIST_HPP_
#define _LIST_HPP_

#include "AMateria.hpp"
struct element
{
    element *_next;
    AMateria *_materia;
};

class list
{
public:
    element *listptr;
    list();
    list(list &list);
    ~list();
    list &operator=(list const &list);
    void AddElement(AMateria *New);
};

#endif