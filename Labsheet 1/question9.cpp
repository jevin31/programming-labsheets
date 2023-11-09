#include <iostream>
#include <cmath>
using namespace std;
int main()
{    
    int x1,x2,y1,y2,a,b,d;
    cout<<"Please enter the value of x1: ";
    cin>>x1;
    cout<<"Please enter the value of y1: ";
    cin>>y1;
    cout<<"Please enter the value of x2: ";
    cin>>x2;
    cout<<"Please enter the value of y2: ";
    cin>>y2;
    a=(x2-x1);
    b=(y2-y1);
    d=sqrt((a*a)+(b*b));
    cout<<"The distance between the 2 points is: "<<d<<endl;
    return 0;
    }