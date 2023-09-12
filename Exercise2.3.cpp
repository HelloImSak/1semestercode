#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Задача «Порядок»
    int N;
    cout<<"Input N: ";
    cin>>N;
    if(N>0){
        for(int i=1;i<=10;i++){
            cout<<N+i<<endl;
        }
    }
    else{
        cout<<"Invalid input"<<endl;
        
    }
    
    return 0;
}
