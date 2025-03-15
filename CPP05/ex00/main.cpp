#include "bureaucrat.hpp"

int main()
{
    try
    {
        bureaucrat br1("ana", 3);
        /* code */
        br1.increment();
        std::cout << br1 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    }

    // catch (const char *str)
    // {
    //     std::cerr << br1.getName() << "'s grade is " << br1.getGrade() << "." << '\n';
    // }
}