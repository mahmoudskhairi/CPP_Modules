#include <iostream>

template <typename mytype>

class MyClass
{
private:
    mytype _first;
    mytype _second;

public:
    MyClass() {};
    MyClass(mytype first, mytype second) : _first(first), _second(second) {};
    mytype Getfirst() { return this->_first; }
    mytype Getsecond() { return this->_second; }
    ~MyClass() {};
};

int main()
{
    MyClass<std::string> obj1("mahmoud", "skhairi");
    std::cout << "first: " << obj1.Getfirst() << ", second: " << obj1.Getsecond() << std::endl;
    MyClass<float> obj2(15.5f, 20.0f);
    std::cout << "first: " << obj2.Getfirst() << ", second: " << obj2.Getsecond() << std::endl;
}