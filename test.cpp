
#include <iostream>
#include <vector>


size_t jacobsthal(size_t n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}
void    JacobsthalOrder( std::vector<size_t> &order, size_t size)
{
    if (size == 0)
    {
        return;
    }
    if (size == 1)
    {
        order.push_back(0);
        return;
    }
    order.push_back(0);
    order.push_back(1);
    int last = 1;
    int j_current;
    int old_j_current = 0;
    int n = 3;
    // int count = 0;
    while (n < size)
    {
        j_current = jacobsthal(n);
        if (j_current >= size)
            break;
        std::cout << "Jn: " << j_current << std::endl;
        size_t i;
        for (i = j_current - 1; i > last; i--)
        {
            order.push_back(i);
        }
        last = j_current;
        std::cout << "###" << std::endl;
        for (size_t i = 0; i < order.size(); i++)
        {
            std::cout << order.at(i) << " , ";
        }
        std::cout << std::endl;
        n++;
        
        // order.push_back(j_current);
    }
    // order.push_back(j_current);
}

int main()
{
    std::vector<size_t> order;
    JacobsthalOrder(order, 22);                         

    std::cout << "@@@@@@@@@@@@@@@@" << std::endl;
    for (size_t i = 0; i < order.size(); i++)
    {
        std::cout << order.at(i) << ", ";
    }
    
    std::cout << "\n0, 1, 2, 4, 3, 10, 9, 8, 7, 6, 5, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 21" << std::endl;
}