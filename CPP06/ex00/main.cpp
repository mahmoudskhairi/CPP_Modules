#include <iostream>

void AnalyseInput(const std::string &str)
{
    
}

int main(int ac, char *av[])
{
    if (ac == 2)
    {
        AnalyseInput(static_cast<std::string>(av[1]));
    }
    // int x = 9;
    // std::cout << "float: " << static_cast<double>(x) << std::endl;
}