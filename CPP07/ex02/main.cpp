#include "Array.hpp"
#define MAX_VAL 750

void MyTest()
{
    Array<int> arr(3);
    arr[0] = 111;
    arr[1] = -111;
    arr[2] = 2;
    Array<int> arr_ = arr;
    std::cout << "# test 1" << std::endl;
    std::cout << "- index 0: " << arr[0] << std::endl;
    arr.print();
    // arr_ = arr;
    std::cout << "# test 2" << std::endl;
    std::cout << "- index 0: " << arr_[0] << std::endl;
    arr_.print();
}

int SubjectTest()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
// void leaks()
// {
//     system("leaks -q Array");
// }
int main()
{
    // atexit(leaks);
    try
    {
        MyTest();
        // SubjectTest();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
