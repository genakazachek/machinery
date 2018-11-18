#include <iostream>
#include <typeinfo>

int main()
{
    using T = const volatile double;
    std::cout << "Type: " << typeid(T).name() << std::endl;
    
    return 0;
}
