#include <iostream>

int main() {
    int a = 42;                  // десятичный
    int b = 052;                 // восьмеричный
    int c = 0x2A;                // шестнадцатеричный
    int d = 0b101010;            // двоичный
    int e = 1'000'000;           // разделитель разрядов

    unsigned int  u   = 42u;     // беззнаковый
    long          l   = 42L;     // long
    unsigned long ul  = 42UL;    // unsigned long
    long long     ll  = 42LL;    // long long
    unsigned long long ull = 42ULL;

    short s = -5;                // знаковый short
    unsigned short us = 65535;   // беззнаковый short
    char ch = 'A';               // символьный литерал
    unsigned char uch = 0xFF;    // 255

    std::cout << a << b << c << d << e << u << l << ul << ll << ull
              << s << us << ch << (int)uch << std::endl;
}