#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#ifndef PRINTINGMODE
#define PRINTINGMODE 1
#endif

#include <iostream>
// #include <cstdint>

struct Data
{
    int Id;
    std::string Name;
};
class Serializer
{
private:
    /* data */
    Serializer(/* args */);
public:
    Serializer(const Serializer &other);
    Serializer &operator=(const Serializer &other);
    static  uintptr_t serialize(Data* ptr);
    static  Data* deserialize(uintptr_t raw);
    virtual ~Serializer();
};

#endif