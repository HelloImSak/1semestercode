#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double S, m;
    int n;

    // Input loan amount, monthly payment, and loan duration
    cout << "Enter the loan amount (S rubles): ";
    cin >> S;
    cout << "Enter the monthly payment (m rubles): ";
    cin >> m;
    cout << "Enter the loan duration in years (n years): ";
    cin >> n;

    // Calculate the interest rate (p) using the formula
    double r = 0.01;  // Initial guess for the monthly interest rate (in decimal form)
    double epsilon = 0.001;  // A small value for precision
    double balance;

    do {
        balance = S;
        r += 0.001;  // Increase the interest rate guess

        for (int i = 0; i < n * 12; ++i) {
            balance -= m;
            balance += balance * (r / 12);  // Monthly interest
        }
    } while (balance > 0);

    // Convert the interest rate from decimal to percentage
    double p = r * 12 * 100;

    // Output the calculated interest rate
    cout << "The loan was issued at an annual interest rate of " << p << "%" << std::endl;

    return 0;
}
