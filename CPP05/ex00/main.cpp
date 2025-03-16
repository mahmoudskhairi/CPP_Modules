#include "bureaucrat.hpp"

void TooLowTest()
{
    bureaucrat bur_("#me#", 145);
    for (size_t i = 0; i < 10; i++)
    {
        std::cout << bur_ << std::endl;
        bur_.decrement();
    }
}
void TooHighTest()
{
    bureaucrat bur_("#me#", 4);
    for (size_t i = 0; i < 5; i++)
    {
        std::cout << bur_ << std::endl;
        bur_.increment();
    }
}
int main()
{
    try
    {
        // TooLowTest();
        TooHighTest();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}