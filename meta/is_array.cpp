#include <array>
#include <iostream>
#include <type_traits>

class Coord
{
    int x;
    int y;
    int z;
};

int main()
{
    std::cout << std::boolalpha << "Check for arrays" << std::endl;
    std::cout << "Coord: " << std::is_array_v<Coord> << std::endl;
    std::cout << "Coord*: " << std::is_array_v<Coord*> << std::endl;
    std::cout << "Coord[]: " << std::is_array_v<Coord[]> << std::endl;
    std::cout << "Coord[4] " << std::is_array_v<Coord[4]> << std::endl;   
    std::cout << "Coord[][10]: " << std::is_array_v<Coord[][10]> << std::endl;
    std::cout << "Coord[2][2][8]: " << std::is_array_v<Coord[2][2][8]> << std::endl;
    std::cout << "std::array<Coord, 10>: " << std::is_array_v<std::array<Coord, 10>> << std::endl;
    return 0;
}
