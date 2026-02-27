#include<iostream>
using namespace std;
int main()
{
    int l; //Declaration only 
    cout<<"Enter the legth of the rectangle: ";
    cin>>l;
    int b;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;
    int a = l*b;  // Initialization and Declaration
     //^Area of the rectangle formula..
    int p = 2*(l+b); // !Area of rectangle perimeter formula...
    if(a>p){
        cout<<"The area is greater than the perimeter... ";
        }
    else if(p>a){
        cout<<"The perimeter is greater than...";
    }
    else
        cout<<"The end";
    return 0;
}