#include<iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"Enter the cost price: \n";
    cin>>cp;
    cout<<"Enter the selling price: \n";
    cin>>sp;
    if(sp>cp){
        cout<<"profit";
    }
    if(sp<cp){  //cp>sp
        cout<<"loss";
    }
     if(sp==cp){  
        cout<<"no profit no loss";
    }



    return 0;
}