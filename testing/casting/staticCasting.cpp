#include <bits/stdc++.h>
class base
{
private:
    /* data */
public:
    base(/* args */);
    ~base();
};

base::base(/* args */)
{
}

base::~base()
{
}
class derived : public base
{
private:
    /* data */
    public:
    int i;
    derived(/* args */);
    ~derived();
};

derived::derived(/* args */)
{
    this->i = 1;
}

derived::~derived()
{
}


int main()
{
    // std::cout << "test 1 # double to char" << std::endl;
    // double c = 65.55;
    // char x = static_cast<char>(c);
    // std::cout << "result: " << x << std::endl;
    // std::cout << "test 2 # int to double" << std::endl;
    // int a = 77;
    // double s = static_cast<double>(a);
    // std::cout << "result: " << s << std::endl;
    std::cout << "#Up Casting#" << std::endl;
    derived * der = new derived;
    std::cout << static_cast<base *>(der) << std::endl;
    std::cout << "#Down Casting#" << std::endl;
    base *bas = new base;
    derived *ptr =  static_cast<derived *>(bas);
    std::cout << ptr->i << std::endl;//undefined behavior
    
    // wrong conversion
    std::cout << "#Casting from int* to float or vice versa#" << std::endl;
    float x1 = 5.5;
    float * p = &x1;
    int* f = (int *)p;
    // int* f = static_cast<int *>(p);...did display a compile time error.
    std::cout << "adrees of f: " << f << std::endl;// but the c_style methode didn't
    std::cout << "dereference of p: " << *p << std::endl;
    std::cout << "dereference of f: " << *f << std::endl;
}