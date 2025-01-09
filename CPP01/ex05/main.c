#include <iostream>

using namespace std;

class Myclass
{
private:
    int _value;

public:
    Myclass() {};
    int add(int a, int b)
    {
        return (a + b);
    }
};

int main()
{
    Myclass class1;

    int (Myclass::*ptrAdd)(int, int) = &Myclass::add;
    int sum = (class1.*ptrAdd)(1, 2);
    cout << sum << endl;
}