#include "Base.hpp"
#include <iostream>

int main() 
{
    std::srand(std::time(0));

    for (int i = 0; i < 5; ++i) {
        Base* ptr = generate();
        
        std::cout << "Using pointer: ";
        identify(ptr);
        
        std::cout << "Using reference: ";
        identify(*ptr);
        
        delete ptr;
    }

    return 0;
}
