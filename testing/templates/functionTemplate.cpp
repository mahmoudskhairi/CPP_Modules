#include <iostream>

template <typename mytype>

mytype join(mytype a, mytype b)
{
    return a + b;
}
int main()
{
    std::string s1 = "hello ";
    std::string s2 = "world!";
    std::cout << join(10, 5) << std::endl;                                            // 15
    std::cout << join(1.55, 0.45) << std::endl;                                       // 2
    std::cout << join(s1, s2) << std::endl;                                         // hello world!
    std::cout << join((std::string) "hello ", std::string("everyone!")) << std::endl; // hello everyone!
}