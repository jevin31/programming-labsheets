#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,disc,discRoot,x,y,root1,root2;
    cout<<"This program finds the roots of a quadratic equation and whether they are real or complex."<<endl;
    cout<<"Please enter the coefficient of a: ";
    cin>>a;
    cout<<"Please enter the coefficient of b: ";
    cin>>b;
    cout<<"Please enter the coefficient of c: ";
    cin>>c;
    disc = ((b * b) - (4 * a * c));
    if (disc > 0)
    {
        discRoot = sqrt((b * b) - (4 * a * c));
        root1 = (-b + discRoot) / (2 * a);
        root2 = (-b - discRoot) / (2 * a);
        cout<<"The roots are real!"<<endl;
        cout<<"The solutions are: "<<root1<<" and "<<root2<<endl;
    }
    else
    {
         y = (sqrt(((b * b - 4 * a * c)*-1))/(2*a));
         float x = (-b/(2*a));
         cout<<"The roots are complex!"<<endl;
         cout << "First root is:" << x << "+" << y << "i" << endl;
         cout << "Second root is:" << x << "-" << y << "i" << endl;
    }
    return 0;
}