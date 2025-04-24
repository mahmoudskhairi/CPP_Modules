#include "Array.hpp"

template <typename T>
Array<T>::Array(/* args */): _size(0), _ArrPtr(new T())
{
    if (PRINTINGMODE)
        std::cout << "Default constructor called!" << std::endl;
}
template <typename T>
Array<T>::Array(unsigned int size): _size(size), _ArrPtr(new T[size])
{    
    if (PRINTINGMODE)
        std::cout << "Copy constructor called!" << std::endl;
}
template <typename T>
Array<T>::Array(const Array<T> &another): _size(another._size), _ArrPtr(new T[another._size])
{
    if (PRINTINGMODE)
        std::cout << "Copy assignment operator called!" << std::endl;
    for (size_t i = 0; i < this->_size; i++)
        this->_ArrPtr[i] = another._ArrPtr[i];
}
template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &another)
{
    if (PRINTINGMODE)
        std::cout << "Copy assignment operator called!" << std::endl;
    if (this != &another)
    {
        this->_size = another._size;
        delete[] _ArrPtr;
        this->_ArrPtr = new T[this->_size];
        for (size_t i = 0; i < this->_size; i++)
            this->_ArrPtr[i] = another._ArrPtr[i];
    } 
    return *this;
}
template <typename T>
void    Array<T>::print()
{
    std::cout << "# --- displaying of all array elements --- #" << std::endl;
    for (size_t i = 0; i < this->_size; i++)
        std::cout << "element [" << i << "], value: [" << this->_ArrPtr[i] << "]" << std::endl;
}
template <typename T>
T&    Array<T>::operator[](size_t n){
    
    if (PRINTINGMODE)
        std::cout << "the indexing[] operator called!" << std::endl;
    if (n >= this->_size)
        throw std::out_of_range("Index out of bounds!"); 
    return this->_ArrPtr[n];
}
template <typename T>
size_t  Array<T>::size() const
{
    return this->_size;
}

template <typename T>
Array<T>::~Array(){
    if (PRINTINGMODE)
        std::cout << "Destructor called!" << std::endl;
}