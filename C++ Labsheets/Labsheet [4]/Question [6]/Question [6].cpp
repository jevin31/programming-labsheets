#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int type;
    cout<<"Please enter the type of car(1,2,3,4,5): ";
    cin>>type;
    while ((type < 1)||(type > 5))
    {
        cout<<"Error! Please re-enter the type of car(1,2,3,4,5): ";
        cin>>type;
    }

    switch (type)
    {
        case 1 : cout<<"Type "<<type<<" car is a 1500cc car.";
        break;
        case 2: cout<<"Type "<<type<<" car is a 1500cc car with automatic mirrors.";
        break;
        case 3 : cout<<"Type "<<type<<" car is a 1500cc car with automatic mirrors and front and rear sensors.";
        break;
        case 4 : cout<<"Type "<<type<<" car is a 1200cc car.";
        break;
        case 5 : cout<<"Type "<<type<<" car is a 1200cc car with automatic gear.";
        break;
    }
    return 0;
}