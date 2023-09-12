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
		float cal;
		cal=-c/b;
		cout<<"x="<<cal<<endl;
	}
	else if(c==0){
		cout<<"x=0";
	}
	else{
		cout<<"It's not true'"<<endl;
		cout<<"Please input you number again";
	}


	return 0;
}
