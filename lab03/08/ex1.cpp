#include <iostream>

using namespace std;

int main() {

    int x = 5;
    int y = 5;
    int z = 10;

    bool result = (x == y) + (x == z) == true;

    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    cout << "Resultat: " << boolalpha << result << endl;

    return 0;
}