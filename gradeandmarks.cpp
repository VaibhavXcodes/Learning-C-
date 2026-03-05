#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter marks : ";
    cin>>n;
    // if(n>=81 && n<=100){
    //     cout<<"Very Good";
    // }
    // if(n>=61 && n<=80){
    //     cout<<"Good";
    // }
    // if(n>=41 && n<=60){
    //     cout<<"Average";
    // }
    // if(n<=40){
    //     cout<<"Fail";
    // }
    if(n>=81 && n<=100){
        cout<<"Very Good";
    }
    else if(n>=61){ //! if 75 is greater catch in the first block.
        
        cout<<"Good";
    }
    else if(n>=41){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}
