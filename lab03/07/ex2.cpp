#include <iostream>

int main() {
    long a = 200000, b = 200000;
    long long c = 200000;

    std::cout << "(a * b) * c = " << (a * b) * c << std::endl;

    std::cout << "a * (b * c) = " << a * (b * c) << std::endl;

    return 0;
}