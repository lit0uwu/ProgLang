#include <iostream>
#include <typeinfo>

int main() {
    bool x = true, y = false;

    auto a = x & y;
    std::cout << "Tip peremennoi a: " << typeid(a).name() << std::endl;

    auto b = x && y;
    std::cout << "Tip peremennoi b: " << typeid(b).name() << std::endl;

    return 0;
}