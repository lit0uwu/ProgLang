#include <iostream>

using namespace std;

int main() {
    int x = 7, y = 4;
    long double d = 0.25;

    cout << "(x / y) / d = " << (x / y) / d << endl;

    cout << "(x / d) / y = " << (x / d) / y << endl;

    return 0;
}