#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your marks (out of 100): ";
    cin>>marks;

    if(marks >= 0 && marks <= 100){
        if(marks >= 90){
            cout<<"Grade: A+"<<endl;
            cout<<"Excellent performance!"<<endl;
        }
        else{
            if(marks >= 80){
                cout<<"Grade: A"<<endl;
                cout<<"Very good performance!"<<endl;
            }
            else{
                if(marks >= 70){
                    cout<<"Grade: B"<<endl;
                    cout<<"Good performance!"<<endl;
                }
                else{
                    if(marks >= 60){
                        cout<<"Grade: C"<<endl;
                        cout<<"Average performance."<<endl;
                    }
                    else{
                        if(marks >= 40){
                            cout<<"Grade: D"<<endl;
                            cout<<"Below average. Need improvement."<<endl;
                        }
                        else{
                            cout<<"Grade: F"<<endl;
                            cout<<"Fail. Better luck next time!"<<endl;
                        }
                    }
                }
            }
        }
    }
    else{
        cout<<"Invalid marks! Please enter marks between 0 and 100."<<endl;
    }

    return 0;
}
