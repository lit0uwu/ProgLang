#include <iostream>

using namespace std;

void testCase(const string& caseName, int x, int y, int z) {
    cout << "--- " << caseName << " ---" << endl;
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    int first = (x == y);
    int second = (x == z);
    int sum = first + second;

    bool finalResult = (x == y) + (x == z) == true;

    cout << "(x == y) = " << first << endl;
    cout << "(x == z) = " << second << endl;
    cout << "Summa = " << sum << endl;
    cout << "Itogovoye virasheniye == true: " << boolalpha << finalResult << "\n\n";
}

int main() {

    testCase("Sluchai 1 (x == y, x != z)", 5, 5, 2);

    testCase("Sluchai 2 (x != y, x == z)", 5, 3, 5);

    testCase("Sluchai 3 (x == y == z)", 5, 5, 5);

    testCase("Sluchai 4 (x != y, x != z)", 1, 2, 3);

    return 0;
}