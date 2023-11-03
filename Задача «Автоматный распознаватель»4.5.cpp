#include <iostream>
#include <unordered_map>
using namespace std;

int romanToDecimal(string roman) {
    unordered_map<char, int> romanValues;
    romanValues['I'] = 1;
    romanValues['V'] = 5;
    romanValues['X'] = 10;
    romanValues['L'] = 50;
    romanValues['C'] = 100;
    romanValues['D'] = 500;
    romanValues['M'] = 1000;

    int result = 0;
    int prevValue = 0;

    for (int i = roman.size() - 1; i >= 0; i--) {
        int currentValue = romanValues[roman[i]];

        if (currentValue < prevValue) {
            result -= currentValue;
        }
        else {
            result += currentValue;
        }

        prevValue = currentValue;
    }

    return result;
}

int main() {
    string roman;
    cout << "Input the roman number: ";
    cin >> roman;

    int decimal = romanToDecimal(roman);
    cout << "Decimal value: " << decimal << endl;

    return 0;
}
