#include <iostream>

using namespace std;

int main() {
    cout << boolalpha;

    int x = 5, y = 5, z = 5;
    cout << "Priy x=5, y=5, z=5:" << endl;
    cout << "x == y == z -> " << (x == y == z) << endl;

    x = 5; y = 5; z = 1;
    cout << "\nPriy x=5, y=5, z=1:" << endl;
    cout << "x == y == z -> " << (x == y == z) << endl;

    return 0;
}