#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b,c,x1,x2,deta,fkto,otherpart;
	cout<<"Enter your number a,b,c: \n";
	cin>>a>>b>>c;
	deta=b*b-4*a*c;
	
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
	
	return 0;
}