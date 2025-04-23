#ifndef iTER_HPP
#define iTER_HPP
#include <iostream>
#define LENGHT 3
template <typename T>
void effect(T &x)
{
    x = 48;
}

template <typename T>
void    iter(T (&arrptr)[LENGHT], size_t len, void   (*func)(T &element))
{
    for (size_t i = 0; i < len; i++)
        func(arrptr[i]);
}
#endif