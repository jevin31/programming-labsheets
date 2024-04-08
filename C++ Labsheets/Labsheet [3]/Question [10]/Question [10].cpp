#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float speed,fine;
    cout<<"Enter the speed: ";
    cin>>speed;
    while ((speed < 0) || (speed > 300))
    {
        cout<<"The speed entered is out of range!"<<endl;
        cout<<"Enter the speed again: ";
        cin>>speed;
    }
    if (speed > 90)
    {
        fine = (500 + ((speed - 90) * 10));
        cout<<"Speed limit exceeded! The speeding fine is: Rs "<<fine<<endl;
    }
    else
    {
        cout<<"The speed limit has not been exceed. " <<endl;
    }
    return 0;
}