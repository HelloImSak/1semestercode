#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, b;
    
    cout << "Enter the value of x: ";
    if (!(cin >> x)) {
        cout << "Invalid input for x. Please enter a numeric value." << endl;
        return 1;  // Exit with an error code
    }

    cout << "Enter the value of y: ";
    if (!(cin >> y)) {
        cout << "Invalid input for y. Please enter a numeric value." << endl;
        return 1;  // Exit with an error code
    }

    cout << "Enter the value of b: ";
    if (!(cin >> b)) {
        cout << "Invalid input for b. Please enter a numeric value." << endl;
        return 1;  // Exit with an error code
    }

    if (b > y && b >= x) {
        double result = log(b - y) * sqrt(b - x);
        cout << "Result: " << result << endl;
    } else {
        cout << "Invalid input. (b must be greater than both x and y)" << endl;
    }

    return 0;
}
