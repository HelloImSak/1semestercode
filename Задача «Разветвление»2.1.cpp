#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, a;
    
    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of a: ";
    cin >> a;

    if (abs(x) < 1) {
        double result = pow(a, log(fabs(x)));
        cout << "Result: " << result << endl;
    } else if (abs(x) >= 1) {
        if (a >= x * x) {
            double result = sqrt(a - x * x);
            cout << "Result: " << result << endl;
        } else {
            cout << "Invalid input. (a must be greater than or equal to x^2)" << endl;
        }
    } else {
        cout << "Invalid input. (x cannot be equal to 1)" << endl;
    }

    return 0;
}
