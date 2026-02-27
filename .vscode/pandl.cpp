#include<iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"Enter the cost price: ";
    cin>>cp;
    cout<<"Enter the selling price: ";
    cin>>sp;
    // cin>>cp>>sp;
    // // cin>>sp;
    if(sp>cp){
        cout<<"profit is "<<sp-cp;
    }
    else if(cp>sp){  //sp<cp   (cp>sp)
        cout<<"loss is "<<cp-sp;
    }
    else{
        cout<<"No profit no loss";
    }

    return 0;
}
