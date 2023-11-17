#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string hexadecimal_number;
    cout << "Enter a hexadecimal number: ";
    cin >> hexadecimal_number;

    long decimal_number = strtol(hexadecimal_number.c_str(), nullptr, 16);
    cout <<"Convert from hex to decimal: "<<decimal_number << "\n";
    string octal_number = "";
    cout << "Steps from decimal to octal:\n";

    while (decimal_number != 0) {
        long remainder = decimal_number % 8;
        cout << remainder << " from dividing " << decimal_number << " / 8.\n";
        octal_number = char(remainder + '0') + octal_number;
        decimal_number /= 8;
    }

    cout << "\nThe octal representation of hexadecimal number " << hexadecimal_number << " is " << octal_number << "." <<endl;

    return 0;
}
