#ifndef _BRAIN_HPP_
#define _BRAIN_HPP_

#include <iostream>

class Brain
{
private:
    std::string ideas[100];

public:
    Brain();
    Brain(Brain &New);
    std::string GetIdea(size_t i) const;
    void SetIdea(std::string Myidea, size_t i);
    Brain &operator=(Brain &New);
    ~Brain();
};

#endif