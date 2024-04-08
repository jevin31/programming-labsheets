#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x,y,z;
    cout<<"This program finds the hypotenuse of a right-angled triangle using Pythagoras' theorem."<<endl;
    cout<<"Please enter the value of smallest length,L1: ";
    cin>>x;
    cout<<"Please enter the value of smallest length,L2: ";
    cin>>y;
    z = sqrt(pow(x,2) + pow(y,2));
    cout<<"The length of the hypotenuse is "<<z<<endl;
    return 0;
}
