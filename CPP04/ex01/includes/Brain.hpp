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
    Brain &operator=(Brain &New);
    ~Brain();
};

#endif