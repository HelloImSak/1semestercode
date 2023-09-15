#include<iostream>
#include<cmath>
using namespace std;
int main(){
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
	            cout<<"it's not corresct";
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
