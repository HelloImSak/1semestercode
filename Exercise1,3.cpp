#include <iostream>
#include <string>
using namespace std;

int main() {
    string timeOfDay;
    bool isDay, areCurtainsOpen, isLampOn;

    cout << "Is it day or night? (day/night): ";
    cin >> timeOfDay;

    cout << "Are the curtains open? (yes/no): ";
    cin >> areCurtainsOpen;

    cout << "Is the lamp on? (yes/no): ";
    cin >> isLampOn;

    if ((timeOfDay == "day" && areCurtainsOpen) || isLampOn) {
        cout << "The room is bright." << endl;
    } else {
        cout << "The room is not bright." << endl;
    }

    return 0;
}
