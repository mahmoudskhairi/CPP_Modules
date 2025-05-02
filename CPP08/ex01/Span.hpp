#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>

#ifndef PRINTINGMODE
#define PRINTINGMODE   1
#endif
class Span
{
private:
    /* data */
    std::vector<int> MyVect;
    unsigned int _N;
    Span(/* args */);
public:
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();
    void    addNumber(int number);
    size_t shortestSpan(); 
    size_t longestSpan();
    void    fillVector(unsigned int size);
};

#endif