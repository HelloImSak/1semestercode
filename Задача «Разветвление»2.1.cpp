#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, a;
    
    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of x: ";
    cin >> x;

    if (abs(x) < 1) {
        if (x == 0) {
            cout << "The result is undefined" << endl;
        } else {
            double result1 = a* log(abs(x));
            cout << "Result1: " << result1 << endl;
        }
    } else if (abs(x) >= 1 && a >= x * x) {
        double result2 = sqrt(a - x * x);
        cout << "Result2: " << result2 << endl;
    } else {
        cout << "The result is undefined" << endl;
    }

    return 0;
}
