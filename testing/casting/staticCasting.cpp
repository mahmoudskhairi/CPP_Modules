#include <bits/stdc++.h>

int main()
{
    std::cout << "test 1 # double to char" << std::endl;
    double c = 65.88;
    char x = static_cast<char>(c);
    std::cout << "result: " << x << std::endl;
    std::cout << "test 2 # int to double" << std::endl;
    int a = 77;
    double s = static_cast<double>(a);
    std::cout << "result: " << s << std::endl;
}