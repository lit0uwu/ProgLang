#include <iostream>

using namespace std;

int main() {
    int x = 7;
    int y = 7;
    int z = 7;

    int sum = (x == y) + (x == z); // 1 + 1 = 2
    bool result = (x == y) + (x == z) == true;

    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    cout << "Promeshutochnaya summa: " << sum << endl;
    cout << "Resultat virasheniya: " << boolalpha << result << endl;

    return 0;
}