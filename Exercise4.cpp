#include <iostream>
#include <fstream>
using namespace std;
int main() {
   
    const char* filename = "numbers.txt";
    ofstream outputFile(filename);

    if (outputFile.is_open()) {
        int v[10] = { 1,2,3,4,6,7,9,5,8,9 };
        for (int i = 0; i < 10; ++i) {
            outputFile << v[i]<<" ";
            cout <<v[i]<<" "<<"\n";
        }
        outputFile.close();
        ifstream inputFile(filename);

        if (inputFile.is_open()) {
            int number;
            int sum = 0;

            while (inputFile >> number) {
                sum += number;
            }
            inputFile.close();
            cout << "Sum: " << sum << endl;
        }
        else {
            cout << "failed file reading" << endl;
            return 0;
        }
    }
    else {
        cout << "Failed create file" << std::endl;
        return 1;
    }

    return 0;
}
