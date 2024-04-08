#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,A,B,C,A1,B1,C1,area;
    cout<<"Enter the length of first side: ";
    cin>>b;
    cout<<"Enter the length of second side: ";
    cin>>c;
    cout<<"Enter the angke between the 2 sides: ";
    cin>>A;
    A1 = A * (M_PI/180);
    a = sqrt((b * b) + (c * c) - (2 * b * c * cos(A1)));
    B1 = asin((sin(A1) * b)/a);
    C1 = ((M_PI) - (A1 + B1));
    B = B1 * (180/M_PI);
    C = C1 * (180/M_PI);
    area = 0.5 * b * c * sin(A1);
    cout << "The length of the 3rd side is: "<<a<<endl;
    cout << "The second angle between the first side and third side is: "<<B<<endl;
    cout << "The third angle between the second side and third side is: "<<C<<endl;
    cout << "The area of the triangle is: "<<area<<endl;
    return 0;
}