#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<endl;
        cout<<"A is greater ";
    }
    else if(b>a && b>c){
        cout<<b<<endl;
        cout<<"B is greater ";
    }
    else
        cout<<"C is greater \n"<<c;
        
    return 0;
}
