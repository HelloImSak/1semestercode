#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S, p, n;

    cout << "Enter the loan amount (S) in rubles: ";
    cin >> S;

    cout << "Enter the annual interest rate (p) as a percentage: ";
    cin >> p;

    cout << "Enter the number of years (n): ";
    cin >> n;

    if(p>0){
    // Convert the annual interest rate from percentage to decimal
    p = p / 100.0;

    // Calculate the monthly payment
    double monthlyInterestRate = p / 12.0;
    double denominator = 1 - pow(1 + monthlyInterestRate, -12 * n);
    double monthlyPayment = S * (monthlyInterestRate / denominator);

    cout << "Monthly payment (m): " << monthlyPayment << " rubles" << endl;
    }
    else 
        cout<<"Invalid input percent p!!"<<endl;
    
    return 0;
}
