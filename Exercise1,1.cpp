#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double b,c;
	cout<<"Equation: bx+c=0 \n";
	cin>>b>>c;
	cout<<"b="<<b<<"\n";
	cout<<"c="<<c<<"\n";
	if(b!=0&&c!=0){
		float cal,x;
		cal=-c/b;
		cout<<"x="<<cal<<endl;
	}
	else if(c==0){
		cout<<"0=0 is true";
	}
	else{
		cout<<"Can't calculate"<<endl;
		cout<<"Please input you number again";
	}


	return 0;
}
