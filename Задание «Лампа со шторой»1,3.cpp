#include <iostream>
#include <string>
using namespace std;

int main() {
    string timeOfDay;
    string areCurtainsOpen; // Change the data type to string
    string isLampOn; // Change the data type to string

    cout << "Is it day or night? (day/night): ";
    cin >> timeOfDay;

    cout << "Are the curtains open? (yes/no): ";
    cin >> areCurtainsOpen;

    cout << "Is the lamp on? (yes/no): ";
    cin >> isLampOn;

    if ((timeOfDay == "day" && areCurtainsOpen == "yes") || isLampOn == "yes") {
        cout << "The room is bright." << endl;
    } else {
        cout << "The room is not bright." << endl;
    }

    return 0;
}
---------------------------------------------------------------------------------------------

#include <iostream>
#include <string>

int main() {
    bool isDaytime = true;  // Change to false for nighttime
    bool lampOn = false;    // Change to true to turn on the lamp
    bool curtainsOpen = false; // Change to false to close the curtains

    if ((isDaytime && curtainsOpen) || lampOn) {
        std::cout << "It's bright in the room." << std::endl;
    } else {
        std::cout << "It's dark in the room." << std::endl;
    }

    return 0;
}
