#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, a;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of a: ";
    cin >> a;

    double result;

    if (x < 1) {
        // Calculate a^ln(|x|) when x is less than 0
        result = pow(a, log(fabs(x)));
    } else {
        // Calculate sqrt(a - x*x) when x is greater than or equal to 0
        result = sqrt(a - x * x);
    }

    cout << "Result: " << result << endl;

    return 0;
}
