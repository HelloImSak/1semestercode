#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {

    string hexadecimal_number;
    cout << "Enter a hexadecimal number: ";
    cin >> hexadecimal_number;

    long decimal_number = strtol(hexadecimal_number.c_str(), nullptr, 16);

    string octal_number = "";
    while (decimal_number != 0) {
        octal_number = char((decimal_number % 8) + '0') + octal_number;
        decimal_number /= 8;
    }

    cout << "The octal representation of hexadecimal number " << hexadecimal_number << " is " << octal_number << "." << std::endl;

    return 0;
}
