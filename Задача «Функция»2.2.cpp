#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, b;
    
    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    cout << "Enter the value of b: ";
    cin >> b;

    if (b > y && b > x) {
        double result = log(b - y) * sqrt(b - x);
        cout << "Result: " << result << endl;
    } else {
        cout << "Invalid input. (b must be greater than both x and y)" << endl;
    }

    return 0;
}
