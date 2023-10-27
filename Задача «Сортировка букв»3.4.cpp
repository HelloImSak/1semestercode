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
#include <algorithm>

using namespace std;

int main() {

    string str;
    cout<<"Input letter: ";
    cin>>str;
    
    char chars[30];
    for (int i = 0; i < 30; i++) {
        chars[i] = str[i];
    }

    
    for (int i = 0; i < 30; i++) {
        for (int j = i + 1; j < 30; j++) {
            if (chars[i] > chars[j]) {
                char temp = chars[i];
                chars[i] = chars[j];
                chars[j] = temp;
            }
        }
    }

    for (int i = 0; i < 30; i++) {
        cout <<chars[i];
    }

    return 0;
}
