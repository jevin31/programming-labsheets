#include <iostream>
using namespace std;
int main()
{ 
    int x1,x2,y1,y2;
    float m;
    cout<<"Please enter the value of x1: ";
    cin>>x1;
    cout<<"Please enter the value of y1: ";
    cin>>y1;
    cout<<"Please enter the value of x2: ";
    cin>>x2;
    cout<<"Please enter the value of y2: ";
    cin>>y2;
    m= (y2-y1)/(x2-x1);
    cout<<"The slope of the line is: "<<m<<endl;
    return 0;

}