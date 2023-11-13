#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    n = abs(n);
    double y = 0.0;
    double d = 0.0;

    for (int i = 1; i <= n; ++i) {
        d += sin(i);
        y += static_cast<double>(i) / d;
    }

    std::cout << "Result: " << y << std::endl;

    return 0;
}
