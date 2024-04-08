#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    if (x - y > 0)
    {
        cout<<"The first number "<<x<<" is the largest"<<endl;
    }
    else
    {
        cout<<"The second number "<<y<<" is the largest"<<endl;
    }
    return 0;
}