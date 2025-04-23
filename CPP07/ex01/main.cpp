#include "iter.hpp"

int main()
{
    //test 1
    std::cout << "\n# --- test 1 --- #" << std::endl;
    int arr1[LENGHT] = {0, 1, 2};
    int (&ref1)[LENGHT] = arr1;
    for (size_t i = 0; i < LENGHT; i++)
        std::cout << "-i = " << i << " element: "<< arr1[i] << std::endl;
    iter(ref1, LENGHT, &effect);
    for (size_t i = 0; i < LENGHT; i++)
        std::cout << "-i = " << i << " element: "<< arr1[i] << std::endl;
    //test 2
    std::cout << "\n# --- test 2 --- #" << std::endl;
    std::string arr2[LENGHT] = {"hello", "world", "!"};
    std::string (&ref2)[LENGHT] = arr2;
    for (size_t i = 0; i < LENGHT; i++)
        std::cout << "-i = " << i << " element: "<< arr2[i] << std::endl;
    iter(ref2, LENGHT, &effect);
    for (size_t i = 0; i < LENGHT; i++)
        std::cout << "-i = " << i << " element: "<< arr2[i] << std::endl;
    
}