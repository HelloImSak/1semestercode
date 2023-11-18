#include <iostream>
#include <fstream>
#include <string>

using namespace std;

static bool searchBook(ifstream& file, string title) {
    string line;
    while (getline(file, line)) {
        if (line.find(title) != string::npos) {
            return true;
        }
    }
    return false;
}

int main() {
    ofstream file("library.txt", ios::app);
    ifstream fileSearch("library.txt");

    string fio, title, year;
    cout << "Enter the FIO of the author: ";
    cin >> fio;
    cout << "Enter the book title: ";
    cin >> title;
    cout << "Enter the year of publication: ";
    cin >> year;

    file << fio << endl << title << endl << year << endl;

    file.close();

    string inputTitle;
    cout << "Enter the book title you want to search for: ";
    cin >> inputTitle;

    if (searchBook(fileSearch, inputTitle)) {
        cout << "Book found! Author and year of publication: " << endl;
        cout << fio << endl << year << endl;
    }
    else {
        cout << "Book not found." << endl;
    }

    fileSearch.close();

    return 0;
}
