#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <exception>

#ifndef PRINTINGMODE
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
    Array(const Array &another);
    Array &operator=(const Array &another);
    T    &operator[](size_t n);
    void    print();
    size_t  size() const;
    ~Array();
};

#include "Array.tpp"
#endif