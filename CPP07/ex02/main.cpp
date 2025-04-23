#include "Array.hpp"

int main()
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