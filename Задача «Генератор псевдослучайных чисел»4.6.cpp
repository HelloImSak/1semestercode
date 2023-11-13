#include <iostream>

int generator(int si, int m, int b, int c) {
    si = (m * si + b) % c;
    return si;
}

int main() {
    int m, b, c, so;

    std::cout << "I" << std::endl;
    m = 37;
    b = 3;
    c = 64;
    so = 0;

    for (int i = 0; i < 10; i++) {
        so = generator(so, m, b, c);
        std::cout << so << " ";
    }

    std::cout << std::endl << "II" << std::endl;
    m = 25173;
    b = 13849;
    c = 65537;
    so = 0;

    for (int i = 0; i < 10; i++) {
        so = generator(so, m, b, c);
        std::cout << so << " ";
    }

    return 0;
}
