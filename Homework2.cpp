#include<iostream>
#include<cmath>
#define _USE_MATH_DEFINES
using namespace std;
int main(){
	
	float v,h,R,r,S,l,V;
    cout<<"You need to input some value...!"<<endl;
    cout << "(R): ";
    cin >> R;
    cout <<"(r): ";
    cin >> r;
    cout << "(h): ";
    cin >> h;
    if(h>0&&R>0&&r>0){
    	l = sqrt((R - r) * (R - r) + h * h);
    	cout<<"L= "<<l<<endl;
    	S = M_PI * l * (R + r) + M_PI * (R * R + r * r);
    	cout<<"Value of S= "<<S<<endl;
    	V = (1.0 / 3.0) * M_PI * h * (R * R + r * r + R * r);
    	cout<<"Value of V= "<<V<<endl;
	}
	else
		cout<<"Invalid input!!!";
	
	
	
	return 0;
}