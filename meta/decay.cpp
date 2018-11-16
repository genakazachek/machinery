#include <iostream>
#include <typeinfo>
#include <type_traits>

int main()
{
    std::cout << "int -> " << typeid(std::decay_t<int>).name() << std::endl;
    std::cout << "int* -> " << typeid(std::decay_t<int*>).name() << std::endl;
    std::cout << "int& -> " << typeid(std::decay_t<int&>).name() << std::endl;
    std::cout << "int&& -> " << typeid(std::decay_t<int&&>).name() << std::endl;
    std::cout << "const int& -> " << typeid(std::decay_t<const int&>).name() << std::endl;
    std::cout << "int[] -> " << typeid(std::decay_t<int[]>).name() << std::endl;
    std::cout << "int(int) -> " << typeid(std::decay_t<int(int)>).name() << std::endl;
    std::cout << "int (*)(int) -> " << typeid(std::decay_t<int (*)(int)>).name() << std::endl;

    return 0;
}
