#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S, n, m, r, rt = 0.0001;
    cout << "S= ";
    cin >> S;
    cout << "m= ";
    cin >> m;
    cout << "n= ";
    cin >> n;

    if (n == 0 && S <= 0) {
        cout << "Incorrect input" << endl;
        return 1; // Exit the program with an error code
    }

    double mt;
    double increment = 0.0001;

    for (r = rt; ; r += increment) {
        mt = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
        if (mt >= m) {
            break;
        }
    }

    cout << "p= " << r * 100 << "%" << endl;
    return 0;                                          
}
