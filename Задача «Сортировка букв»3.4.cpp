#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // Задаем строку из 30 букв
    string inputString;
    cout<<"Input letter: ";
    cin>>inputString;
    
    // Проверяем, что длина строки равна 30
    if (inputString.length() != 30) {
        cout << "The string must contain 30 letters." << endl;
        return 1;
    }
    
    // Сортируем строку в алфавитном порядке
    sort(inputString.begin(), inputString.end());
    
    // Выводим отсортированную строку
    cout << "Sorts String: " << inputString << endl;
    
    return 0;
}

-------------------------------------------
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
