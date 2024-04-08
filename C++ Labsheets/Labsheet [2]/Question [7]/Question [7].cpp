#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //This program takes values of x and n and calculates and displays x^n + 3x^n-1 + 2x^n-2.
    float x,n,result;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of n:";
    cin>>n;
    result = ((pow(x,n)) + (3 * pow(x,n-1)) + (2 * pow(x,n-2)));
    cout<<"The anser of x^n + 3x^n-1 +2x^n-2 is: "<<result<<endl;
    return 0;
}