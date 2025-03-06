#ifndef _LIST_HPP_
#define _LIST_HPP_

#include "AMateria.hpp"
struct element
{
    element();
    element(const element &New);
    element &operator=(const element &New);
    ~element();
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
    void DeleteList();
};

#endif