#include<iostream>
using namespace std;

int main()
{
    float p = 1000; //principal_amount 
    float r = 30; //rate_of_return 
    float t = 3; //time 
    float si = (p*r*t)/100; //simple interest = si
    
    cout<<si<<endl;
    return 0;
}
