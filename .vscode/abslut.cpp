#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number you want to enter n: ";
    cin>>n;
    // if(n>=0){
    //     cout<<n;
    //     }
    // else{
    //    cout<<-n;
    //     }
    if(n<0) n = -n;
    cout<<n;

    return 0;
}
