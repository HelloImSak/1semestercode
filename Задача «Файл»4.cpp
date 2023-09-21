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

   --------------------------------------------------------------------


#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Создаем файл и записываем в него 10 чисел
    ofstream outputFile("numbers.txt");
    if (!outputFile.is_open()) {
        cout << "Не удалось создать файл." << endl;
        return 1;
    }

    cout << "Введите 10 чисел:" << endl;
    for (int i = 0; i < 10; i++) {
        double number;
        cin >> number;
        outputFile << number << endl;
    }
    outputFile.close();

    // Открываем файл снова и находим сумму чисел
    ifstream inputFile("numbers.txt");
    if (!inputFile.is_open()) {
        cout << "Не удалось открыть файл для чтения." << endl;
        return 1;
    }

    double sum = 0;
    double number;
    while (inputFile >> number) {
        sum += number;
    }
    inputFile.close();

    cout << "Сумма чисел: " << sum << endl;

    return 0;
}


    return 0;
}
