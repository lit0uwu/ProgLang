#include <iostream>

int main() {
    auto a = 10;          // int
    auto b = 3.14;        // double
    auto c = 'Z';         // char
    auto sum = a + b;     // double (т.к. int + double дает double)

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "sum = " << sum << std::endl;

    return 0;
}
