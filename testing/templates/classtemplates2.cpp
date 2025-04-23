#include <iostream>

template <typename T>
class classtemplates2
{
private:
    T *ptr;
    size_t size;
public:
    classtemplates2(/* args */): ptr(NULL), size(0)
    {
        std::cout << "default constructor here!" << std::endl;
    }
    classtemplates2(T *p, size_t s): ptr(new T[s]) ,size(s)
    {
        std::cout << "copy constructor here!" << std::endl;
        for (size_t i = 0; i < size; i++)
        {
            ptr[i] = p[i];
        }
    }
    void    print ()
    {
        for (size_t i = 0; i < size; i++)
        {
            std::cout << "element "<< i << "value: " << this->ptr[i] << std::endl;
        }
        
    }
    ~classtemplates2()
    {
        std::cout << "destructor here!" << std::endl;
    }
};

int main()
{
    int arr[3] = {2, 3, 4};
    classtemplates2<int> clss(arr, 3);
    clss.print();
}

