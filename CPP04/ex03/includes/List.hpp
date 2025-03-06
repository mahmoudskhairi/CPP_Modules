#ifndef _LIST_HPP_
#define _LIST_HPP_

#include "AMateria.hpp"
class element
{
    public:
    element *_next;
    AMateria *_materia;
    element();
    ~element();
};

class list : public element
{
    public:
    element *listptr;
    list();
    ~list();
    void AddElement(AMateria *New);
    void DeleteList();
};

#endif