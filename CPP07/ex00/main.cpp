#include "whatever.hpp"
int main( void ) {
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
    }
    
    
// int main()
// {
//     int a = 2;
//     int b = 5;
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     swap<int>(a, b);
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     // std::string s1 = "mahmoud";
//     // std::string s2 = "maamoun";
//     // std::cout << "#test before swaping#" << std::endl;
//     // std::cout << "s1: " << s1 << std::endl;
//     // std::cout << "s2: " << s2 << std::endl;
//     // swap<std::string>(s1, s2);
//     // std::cout << "#test after swaping#" << std::endl;
//     // std::cout << "s1: " << s1 << std::endl;
//     // std::cout << "s2: " << s2 << std::endl;
//     std::cout << "#max abd min tests#" << std::endl;
//     std::cout << "max: " << max<std::string>(a, b) << std::endl;
//     std::cout << "min: " << min<std::string>(a, b) << std::endl;
//     std::cout << "" << std::endl;
// }