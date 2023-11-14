#include <iostream>
#include <cmath>

int main() {
    const int width = 80;  
    const int height = 20; 
    const double pi = 3.14159265358979323846;

    for (int y = height - 1; y >= 0; --y) {
        for (int x = 0; x < width; ++x) {
            double angle = static_cast<double>(x) / width * 4 * pi; 
            double sineValue = cos(angle);
            int plotHeight = static_cast<int>((sineValue + 1) / 2 * height);

            if (plotHeight == y) {
                std::cout << '*';
            } else if (plotHeight < y && plotHeight + 1 > y) {
                std::cout << '|'; // Línea vertical para representar la función
            } else {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }

    return 0;
}
