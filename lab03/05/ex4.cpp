#include <iostream>

int main() {
    int totalPoints = 17;
    int studentsCount = 5;

    double average = static_cast<double>(totalPoints) / studentsCount;

    std::cout << "Summa ballov: " << totalPoints << std::endl;
    std::cout << "Kolichestvo studentov: " << studentsCount << std::endl;
    std::cout << "Sredniy ball: " << average << std::endl;

    return 0;
}
