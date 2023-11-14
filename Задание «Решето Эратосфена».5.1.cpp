#include <iostream>
#include <vector>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int natur_num;

    std::cout << "Enter a natural number: ";
    std::cin >> natur_num;

    std::cout << "Prime numbers in the range from 2 to " << natur_num << " are:\n";

    for (int i = 2; i <= natur_num; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
