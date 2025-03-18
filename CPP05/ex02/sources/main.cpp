#include "AForm.hpp"

void Correct()
{
}
void Wrong()
{
}
int main()
{
    try
    {
        Correct();
        // Wrong();
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
}