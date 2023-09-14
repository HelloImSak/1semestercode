#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main() {
    string inputString = "qwertgbvfcdxszayhnujmkioplwdfr";
    if (inputString.length() != 30) {
        cout << "The string must in 30 letters";
        return 0;

    }
    sort(inputString.begin(), inputString.end());
    cout << "Results of sorted: " << inputString << endl;

    return 0;
}
