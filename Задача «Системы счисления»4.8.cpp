#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Function to convert a number from one base to another
string convertBase(const string& number, int fromBase, int toBase) {
    // Convert the input number to decimal first
    int decimalNumber = stoi(number, nullptr, fromBase);

    // Convert the decimal number to the desired base
    string result = "";
    while (decimalNumber > 0) {
        int remainder = decimalNumber % toBase;
        char digit = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        result = digit + result;
        decimalNumber /= toBase;
    }

    return result.empty() ? "0" : result;
}

int main() {
    cout << "Enter a number: ";
    string inputNumber;
    cin >> inputNumber;

    int fromBase, toBase;
    
    cout << "Enter the base of the input number: ";
    cin >> fromBase;

    cout << "Enter the base for conversion: ";
    cin >> toBase;

    if ((fromBase < 2 ,toBase < 2)  || (fromBase > 16, toBase > 16)) {
        cout << "Invalid base. Supported bases are between 2 and 16." << endl;
        return 1;
    }

    string result = convertBase(inputNumber, fromBase, toBase);

    cout << "Number in base " << toBase << ": " << result << endl;

    return 0;
}
