#include <iostream>

using namespace std;

// Function to determine the sign of a number
int determineSign(double number) {
    if (number > 0)
        return 1;  // Positive
    else if (number < 0)
        return -1; // Negative
    else
        return 0;  // Zero
}

int main() {
	char choice;
    double num;
    do{
	
    cout << "Enter a number: ";
    cin >> num;
    
    int sign = determineSign(num);
    
    if (sign == 1)
        cout << "The number is positive." << endl;
    else if (sign == -1)
        cout << "The number is negative." << endl;
    else
        cout << "The number is zero." << endl;
    cout<<"-------------------------------"<<endl;   
    cout << "Continue again or not? (y/n): ";
    cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
