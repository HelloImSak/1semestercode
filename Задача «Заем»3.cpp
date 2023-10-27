#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double S, p, n,m,r,a,b;

    cout << "Enter the loan amount (S) in rubles: ";
    cin >> S;

    cout << "Enter the annual interest rate (p) as a percentage: ";
    cin >> p;

    cout << "Enter the number of years (n): ";
    cin >> n;

    if(S<0&&p<0)
    	cout<<"Error"<<endl;
    else{
    	r=p/100;//p=r*100
    	cout<<r<<endl;
    	b=pow((1+r),n);
    	a=12*(b-1);
    	cout<<b<<endl;
    	
    	if(a<0)
    		cout<<"error"<<endl;
    	else if(r==0){
    		cout<<S/(12*n)<<endl;
		}
		else
		{
			b=pow((1+r),n);
			m=(S*r*b)/(12*(b-1));
			cout<<m<<endl;
		}
	}
    return 0;
}
--------------------------------------------------------------------------------------------------------------------
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

    if (S>0 && p > 0) {
        // Convert the annual interest rate from percentage to decimal
        double r = p / 100.0;

        // Calculate the monthly payment
        double a, b;
        a = pow((1+r),n);
        b = 12 * (a - 1);
        double monthlyPayment = (S * r * a) / b;
        cout << "Monthly payment (m): " << monthlyPayment << " rubles" << endl;
    }
    else if (p == 0) {
        double monthlyPayment = S / (12 * n);
        cout << "Monthly payment with 0% (m): " << monthlyPayment << " rubles" << endl;
    }
    else
        cout << "Invalid input percent p!!" << endl;


    return 0;
}
