#include "easyfind.hpp"
 
int main() {
    try
    {
        std::vector<int> v2;

        v2.push_back(0);
        v2.push_back(1);
        v2.push_back(2);
        v2.push_back(3);
        std::vector<int>::iterator it1 = easyfind(v2, 0);
        std::cout << "# " << *it1 << " exists in the container ." << std::endl;
        // std::vector<int>::iterator it2 = easyfind(v2, -1);
        // std::cout << "# " << *it2 << " exists in the container ." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
