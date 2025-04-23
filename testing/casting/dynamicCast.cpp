#include <iostream>
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
    di
}