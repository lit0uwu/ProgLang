#include <iostream>


typedef unsigned long long BigInt;
typedef double Coordinate;

int main() {
    BigInt distanceToMoon = 384400000ULL; 
    
    Coordinate x = 12.5;
    Coordinate y = 45.8;

    std::cout << "Rasstoyanie: " << distanceToMoon << " metrov" << std::endl;
    std::cout << "Tochka: (" << x << ", " << y << ")" << std::endl;

    return 0;
}
