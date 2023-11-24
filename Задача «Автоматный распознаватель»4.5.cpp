#include <iostream>
#include <unordered_map>
#include <cctype>

using namespace std;

int romanToDecimal(string roman) {
    unordered_map<char, int> romanMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    int preValue = 0;

    for (int i = roman.length() - 1; i >= 0; --i) {
        char currentChar = toupper(roman[i]);
        int curValue = romanMap[currentChar];

        if (curValue < preValue) {
            result -= curValue;
        } else {
            result += curValue;
            preValue = curValue;
        }
    }

    return result;
}

int main() {
    string romanNumber;
    
    cout << "Enter a Roman numeral: ";
    cin >> romanNumber;

    int decimalNumber = romanToDecimal(romanNumber);
    
    if (decimalNumber == 0) {
        cout << "Invalid Roman numeral entered." << endl;
    } else {
        cout << "The decimal equivalent is: " << decimalNumber << endl;
    }

    return 0;
}
