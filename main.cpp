#include <iostream>
using namespace std;


int main(){
    int n,a=1,b=1,c=0;
    cin>>n;
    cout<<"1 "<<endl;
    cout<<"1 "<<endl;

    while(n>=(a+b)){
        c = a+b;
        cout<<c<<endl;
        b=a;
        a=c;
    }
}

    return 0;
