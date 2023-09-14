#include <iostream>
using namespace std;
int main() {
    int numStars = 48;
    int numStripes = 13;

    // Вывод полос
    for (int i = 0; i < numStripes; ++i)
            cout << "="<<"\n";

    for (int i = 0; i < numStars; ++i) {
        cout << "*";
    }
    cout << endl;

    return 0;
}
