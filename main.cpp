#include <iostream>
using namespace std;


int main() {
    int n,a=1,b=1,c=0;
    cin>>n;
    cout<<"1 "<<endl;
    cout<<"1 "<<endl;

    do{
        c=a+b;
        cout<<c<<endl;
        b=a;
        a=c;
    }
    while(n>=a+b);

    return 0;
}
