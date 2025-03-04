#include <iostream>

class test
{
private:
    /* data */
public:
    test(/* args */)
    {
        std::cout << "constructor" << std::endl;
    }
    void sayhey()
    {
        std::cout << "[heeey test]" << std::endl;
    }
    void sayheey()
    {
        std::cout << "[heeey test]" << std::endl;
    }
    ~test()
    {
        std::cout << "destructor" << std::endl;
    }
};

class derive : public test
{
private:
public:
    derive()
    {
        std::cout << "constructor d" << std::endl;
    }
    void sayhey()
    {
        std::cout << "[heeey derive]" << std::endl;
    }
    ~derive()
    {
        std::cout << "destructor d" << std::endl;
    }
};

int main()
{
    test test1;
    std::cout << sizeof(test1) << std::endl;
    test1.sayhey();
    derive derive1;
    std::cout << sizeof(derive1) << std::endl;
    derive1.sayhey();
}
