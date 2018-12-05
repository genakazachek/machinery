#include <iostream>
#include <functional>
#include <type_traits>
#include <utility>

struct X
{
    int foo() {return 0;}
};

int bar(int x)
{
    return x + 1;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << std::is_function_v<X> << std::endl;
    std::cout << std::is_function_v<int()> << std::endl;
    std::cout << std::is_function_v<decltype(bar)> << std::endl;
    std::cout << std::is_function_v<decltype(&bar)> << std::endl;
    std::cout << std::is_function_v<std::remove_pointer_t<decltype(&X::foo)>> << std::endl;
    std::cout << std::is_function_v<decltype(&X::foo)> << std::endl;
    
    return 0;
}
