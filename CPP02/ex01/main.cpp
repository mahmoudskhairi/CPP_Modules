#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed const b(10); // we cannot modify the non-mutable data members
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.4321f);
}