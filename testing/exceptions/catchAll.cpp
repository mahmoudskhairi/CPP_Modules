#include <iostream>
#include <stdexcept>

int main()
{
    try
    {
        std::cout << "Enter a positive number: ";
        int x;
        std::cin >> x;
        if (x < 0)
            throw "Error: negative number was entered!";
        else
            throw x;
    }
    // catch block 1
    catch (int x)
    {
        std::cout << "your number " << x << " is passed successfully!" << std::endl;
    }
    // catch block 2
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return 1;
    }
    // catch all
    catch (...)
    {
        std::cout << "catch all here !" << std::endl;
    }
}
