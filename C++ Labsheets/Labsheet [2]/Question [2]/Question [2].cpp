#include <iostream>
#include <cmath>
using namespace std;

int main()
{   float a,b,c;
    cout<<"This program finds the complex roots to a quadratic"<<endl;
    cout<<"Please enter the coefficients (a, b, c): ";
    cin>>a>>b>>c;
    float y = (sqrt(((b * b - 4 * a * c)*-1))/(2*a));
    float x = (-b/(2*a));
    cout << "First root is:" << x << "+" << y << "i" << endl;
    cout << "Second root is:" << x << "-" << y << "i" << endl;
    return 0;
}