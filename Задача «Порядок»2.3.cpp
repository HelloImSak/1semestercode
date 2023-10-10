#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	double pointNum;
	cout<<"Input Number: ";
	cin>>pointNum;
	n=static_cast<int>(ceil(pointNum));
	if(n<1)
		n=1;
	for(int i=n;i<n+10;++i){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
