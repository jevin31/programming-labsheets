#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float radius,area;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    if (radius <= 0 ) 
    {
        cout<<"Error! The radius cannot take value 0 or negative!"<<endl;
    }
    else{
        area = ((radius * radius) * M_PI);
        cout<<"The area of circle is: "<<area<<endl;
    }
    return 0;
}