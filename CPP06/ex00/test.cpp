#include <iostream>
bool    isDouble(std::string &input)
{
    int i = 0;
    bool flag = 0;
    std::cout << "size : " << input.size() << std::endl;
    if (input.at(0) == '+' || input.at(0) == '-')
        i++;
    while (i < input.size())
    {
        std::cout << input.at(i) << std::endl;
        if (input.at(i) == '.' && !flag)
        {
            if (!isdigit(input.at(i - 1)) || i + 1 == input.size() || !isdigit(input.at(i + 1)))
                return 0;
                flag = 1;
        }
        else if (!isdigit(input.at(i)))
        {
            if (input.at(i) == 'f' && flag)
            {
                if (i + 1 == input.size())
                    return 1;
                else
                    return 0;
            }
            else
                return 0;
        }
        i++;
    }
    return 1;
}
int main(int ac, char *av[])
{
    std::string str = "+123.02";
    std::cout << "----> \n" << isDouble(str) << std::endl;
}