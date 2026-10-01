#include <iostream>

int main() {
    int count = 5;
    double price = 19.99;

    decltype(count * price) total = count * price;

    std::cout << "Kolichestvo: " << count << std::endl;
    std::cout << "Tsena: " << price << std::endl;
    std::cout << "Itogo: " << total << std::endl;

    return 0;
}
