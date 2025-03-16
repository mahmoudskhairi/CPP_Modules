#include <iostream>
#include <stdexcept>

class test : public std::exception
{
private:
    /* data */
public:
    test(/* args */)
    {
        std::cout << "# constructor" << std::endl;
    }
    ~test()
    {
        std::cout << "# destructor" << std::endl;
    }
    const char *what() const throw()
    {
        return ("you have a problem");
    }
};

int main()
{
    // test test1;
    int flag = 1;
    do
    {
        try
        {
            int numenator;
            int denominator;
            std::cout << "# -------------------------------------- #" << std::endl;
            std::cout << "# welcom on ur calculator world :" << std::endl;
            std::cout << "numenator value :" << std::endl;
            std::cin >> numenator;
            std::cout << "denominator value :" << std::endl;
            std::cin >> denominator;
            if (denominator == 0)
                throw test();
            int division = numenator / denominator;
            std::cout << "result after division : " << division << std::endl;
            flag = 0;
        }
        catch (test &e)
        {
            std::cout << e.what() << std::endl;
            std::cout << "# try again please!" << std::endl;
        }
    } while (flag);

    return 0;
}