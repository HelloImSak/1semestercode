#include <iostream>
using namespace std;

int main() {
    double x, y;
    
    cout << "x\t|\ty" << endl;
    cout << "----------------" << endl;
    
    for (x = -4.0; x <= 4.0; x += 0.5) {
        if (x == 1.0) {
            cout << "x=" << x << "\t|\tUndefined" << endl;
        } else {
            y = (x * x - 2 * x + 2) / (x - 1);
            cout << "x=" << x << "\t|\t" << y << endl;
        }
    }

    return 0;
}
