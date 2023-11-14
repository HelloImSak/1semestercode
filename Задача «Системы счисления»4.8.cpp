#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    std::string hexadecimal_number;
    std::cout << "Enter a hexadecimal number: ";
    std::cin >> hexadecimal_number;

    long decimal_number = strtol(hexadecimal_number.c_str(), nullptr, 16);
    std::cout <<"Convert from hex to decimal: "<<decimal_number << "\n";
    std::string octal_number = "";
    std::cout << "Conversion steps:\n";

    while (decimal_number != 0) {
        long remainder = decimal_number % 8;
        std::cout << "Step: Remainder " << remainder << " from dividing " << decimal_number << " by 8.\n";
        octal_number = char(remainder + '0') + octal_number;
        decimal_number /= 8;
    }

    std::cout << "\nThe octal representation of hexadecimal number " << hexadecimal_number << " is " << octal_number << "." << std::endl;

    return 0;
}
