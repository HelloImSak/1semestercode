#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename = "sample.txt";    
    ofstream outputFile(filename);
    if (outputFile.is_open()) {
        outputFile << "This is other file 11234";

        outputFile.close();
        ifstream inputFile(filename);

        if (inputFile.is_open()) {
            string line;

            // Read each line from the file
            while (getline(inputFile, line)) {
                // Iterate through each character in the line
                for (char character : line) {
                    // Check if the character is a digit
                    if (isdigit(character)) {
                        cout << character;
                    }
                }
            }
            inputFile.close();
        }
        else {
            cout << "Failed to open the file for reading." << endl;
            return 1;
        }
    }
    return 0;
}
---------------------------------------------------------------------------


Sort apphabet
    
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input = "aeybnvcdxtwrzpklomqfsuhgj";

    // Сортировка строковой переменной
    sort(input.begin(), input.end());

    cout << "Отсортированная строка: " << input << endl;

    return 0;
}


    
    
