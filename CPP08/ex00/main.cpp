#include "easyfind.hpp"
 
int main() {

    std::list<int> li;
    // li.push_back(2);
    std::cout << "size: " << li.size() << std::endl;
    try
    {
        std::vector<int> v2;

        v2.push_back(0);
        v2.push_back(1);
        v2.push_back(2);
        v2.push_back(3);
        std::vector<int>::iterator it = easyfind(v2, 2);
        std::cout << "# " << *it << " exists in the container ." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
