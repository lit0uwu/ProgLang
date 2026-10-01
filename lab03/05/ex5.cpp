#include <iostream>

int main() {
    std::cout << "Razmer int: " << sizeof(int) << " baita" << std::endl;
    std::cout << "Razmer double: " << sizeof(double) << " baita" << std::endl;

    int numbers[] = {10, 20, 30, 40, 50, 60};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Razmer vsego massiva v baitah: " << sizeof(numbers) << std::endl;
    std::cout << "Kolichestvi elementov v massive: " << length << std::endl;

    return 0;
}