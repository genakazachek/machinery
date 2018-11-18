#include <iostream>
#include <type_traits>

struct A
{
    using T = int;
    using U = double;
};

struct B
{
    using T = const int;
    using U = int;
};

int main()
{
    std::cout << std::boolalpha;
    std::cout << "A === B " << std::is_same_v<A,B> << std::endl;
    std::cout << "A::T === B::T " << std::is_same_v<A::T, B::T> << std::endl;
    std::cout << "A::T === B::U " << std::is_same_v<A::T, B::U> << std::endl;
    return 0;
}

