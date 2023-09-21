#include <string>
#include <cstdio>
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float a,b,c,x1,x2,deta,fkto,otherpart;
	cout<<"Enter your number a,b,c: \n";
	cin>>a>>b>>c;
	deta=b*b-4*a*c;
	if(a!=0){
	    if(b==0){
	        if(c==0){
	            cout<<"x=0";
	        }
	        else
	        {
	            double fkto;
	            fkto=sqrt(c/a);
	            cout<<"x1="<<"+"<<fkto<<"i"<<endl;
	            cout<<"x2="<<"-"<<fkto<<"i"<<endl;
	        }
	    }
	    else{
	        cout<<"x1=0"<<endl;
	        a=-b/a;
	        cout<<"x2="<<a<<endl;
	    }
	}
	else if(a==0)
	{
	    if(b!=0){
	        if(c!=0){
		    float cal;
		    cal=-c/b;
		    cout<<"x="<<cal<<endl;
	        }
	    else
	        cout<<"x=0";
	    }
	    else if(b==0){
	        if(c==0)
	            cout<<"the equalation has infinity solution"<<endl;
	        else if(c!=0)
	            cout<<"it's not correct";
	    }
	}
	
	else if((a&&b&&c)!=0){
	    if(deta>0){
	    	x1=(-b+sqrt(deta))/(2*a);
	    	x2=(-b-sqrt(deta))/(2*a);
	    	cout<<"Roots are real and different"<<endl;
	    	cout<<"x1="<<x1<<endl;
	    	cout<<"x2="<<x2<<endl;
	    }
	    else if(deta==0){
	    	cout<<"Roots are real and same"<<endl;
	    	x1=(-b+sqrt(deta))/(2*a);
	    	cout<<"x1,x2="<<x1<<endl;
	    }
	    else{
	    	otherpart=-b/(2*a);
	    	fkto=sqrt(-deta)/(2*a);
	    	cout<<"Roots are complex and defferent"<<endl;
	    	cout<<"x1="<<otherpart<<"+"<<fkto<<"i"<<endl;
	    	cout<<"x2="<<otherpart<<"-"<<fkto<<"i"<<endl;
	    }
	    
	}
	else 
	  cout<<"Invalid input";
	 
    return 0;
	}
-----------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, x1, x2, delta;

    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    delta = b * b - 4 * a * c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "The equation has infinite solutions." << endl;
            } else {
                cout << "The equation has no real solutions." << endl;
            }
        } else {
            float root = -c / b;
            cout << "x = " << root << endl;
        }
    } else {
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Roots are real and different:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            cout << "Roots are real and the same:" << endl;
            cout << "x1 = x2 = " << x1 << endl;
        } else {
            float realPart = -b / (2 * a);
            float imaginaryPart = sqrt(-delta) / (2 * a);
            cout << "Roots are complex and different:" << endl;
            cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
            cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
        }
    }

    return 0;
}

    
