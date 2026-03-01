#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a : ";
    cin>>a;
    
    cout<<"Enter the value of b : ";
    cin>>b;

    cout<<"Enter the value of c : ";
    cin>>c;
    //! a>b and a>c --> a>c --> a greatest.
    if(a>b){
        if(a>c){
            cout<<a<<" is greatest";
        }
        else{ // c>a , a>b --> c>a>b
            cout<<c<<" is greates";
        }
    }
    else{ //b>a
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{ //c >b , c > b > a
            cout<<c<<" is greatest";
        }
    }
    
    return 0;
}
