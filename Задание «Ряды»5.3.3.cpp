#include <iostream>
#include <cmath>

int factorial(int num); // Declare the factorial function

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    else {
        return num * factorial(num - 1);
    }
}

double calculateSeries(int n) {

    double result = 1.0;
    double sinSum = 0.0;

    for (int i = 1; i <= n; ++i) {
        sinSum += sin(2 * i);
        result *= (factorial(i) / sinSum);
    }

    return result;
}


int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    double result = calculateSeries(n);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
