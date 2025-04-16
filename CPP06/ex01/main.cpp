#include "Serializer.hpp"

int main()
{
    // Serializer o;
    //c++98 flag
    Data person1;
    person1.Id = 0;
    std::cout << "\n# ---- New Person Is Here ! ---- #" << std::endl;
    person1.Name = "Doctor ahmed";
    std::cout << "person Id: " << person1.Id << ", Named " << person1.Name << std::endl;
    std::cout << "\n# --------- Conversion --------- #" << std::endl;
    uintptr_t x = Serializer::serialize(&person1);
    std::cout << "\n- person address: [ " << &person1 << " ], converted to a uintptr_t value: [ "<< x << " ] ." << std::endl;
    Data *newPtr = Serializer::deserialize(x);
    std::cout << "\n- uintptr_t value: [ " << x << " ], converted to a person address: [ " << newPtr << " ] ." << std::endl;
    std::cout << "\n # ------------------------------ #" << std::endl;
}