#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    // if(n%5==0 && n%3==0) //!Another solution is better in time complexity...
    if(n%15==0){ //^15 ki table hint..
        cout<<"The given number is divisible by 5 and 3...";
    }
    else{
        cout<<"The given number is not div by 5 and 3...";
    }
}