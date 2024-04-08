// Note: This program crashes if the equation has no real roots.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"This program finds the real roots of a quadratic equation."<<endl;
    cout<<"Please enter the coefficients (a,b,c); ";
    cin>>a>>b>>c;
    float discRoot = sqrt((b * b) - (4 * a * c));
    float root1 = (-b + discRoot) / (2 * a);
    float root2 = (-b - discRoot) / (2 * a);
    cout<<"The solutions are: "<<root1<<" and "<<root2<<endl;
    return 0;
}