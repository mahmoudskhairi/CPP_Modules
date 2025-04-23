#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

#ifndef PRINTINGMODE 0
#define PRINTINGMODE 0
#endif

template <typename T>
class Array
{
private:
    size_t _size;
    T *_ArrPtr;
public:
    Array(/* args */);
    Array(unsigned int size);
    Array(const Array<T> &another);
    Array<T> &operator=(const Array<T> &another);
    void    operator[](unsigned int n);
    void    print();
    ~Array();
};

#include "Array.tpp"
#endif