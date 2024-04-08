#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    float sqrtnum;
    cout<<"Enter the integer value: ";
    cin>>num;
    sqrtnum = sqrt(num);
    if (floor(sqrtnum) == sqrtnum)
    {
        cout<<"The number "<<num<<" is a perfect square."<<endl;
    }
    else
    {
        cout<<"The number "<<num<<" is not a perfect square."<<endl;
    }
    return 0;
}