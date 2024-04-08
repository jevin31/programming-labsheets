#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    //This program takes value of x and calculates and displays x^5 + 3x^4 +2x^3
    float x,result;
    cout<<"Enter the value of x: ";
    cin>>x;
    result = ((pow(x,5)) + (3 * pow(x,4)) + (2 * pow(x,3)));
    cout<<"The anser of x^5 + 3x^4 +2x^3 is: "<<result<<endl;
    return 0;
}