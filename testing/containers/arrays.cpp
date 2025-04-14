#include <iostream>

int main()
{
    std::string str = "hello world";
    std::string s1 = "free palestine";
    str.insert(0, " i am mahmoud, ");// add sub-string at the index 0
    str.erase(0, 15);//Removes 3 chars starting at index 2
    // std::cout << str.assign("free palestine") << std::endl;
    // str.swap(s1);// set s1 into s2 and s2 to s1
    // std::cout << s1 << std::endl;
    // str.push_back('!');// add character in the lasgt of the string
    // std::cout << str.at(0) << std::endl;
    // str.pop_back();// remove the last character
    // std::cout << str << std::endl;
    // const char *s = s1.c_str();// return c_string with \0-terminated;
    // const char *s = s1.data();// return row of data without \0-terminated
    // std::cout << s << std::endl;
}