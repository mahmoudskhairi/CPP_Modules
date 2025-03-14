#include <iostream>
#include <stdexcept>

// dynamic exception specification
void func(int x) throw(const char *, int)
{
    if (x == 0)
        throw "Error!";
    else
        throw x;
}
// g++ -std=c++98 funException.cpp -o funException
// we are compiling our code by c++ ,so the error was displayed because dynamic exception were removed from c++17.
int main()
{
    try
    {
        int x = 1;
        try
        {
            func(x);
            std::cout << "re_throwing action." << std::endl;
        }
        catch (const char *str)
        {
            std::cerr << "string :" << str << '\n';
            throw;
        }
        catch (int x)
        {
            std::cerr << "x :" << x << '\n';
            throw;
        }
    }
    catch (...)
    {
        std::cout << "catch all is here!" << std::endl;
    }
}