#include <iostream>
using namespace std;
int main()
{
    float area,diameter,price,costpsq;
    cout<<"Enter the diameter of the circle :";
    cin>>diameter;
    cout<<"Enter the price of pizza :";
    cin>>price;
    area=3.142 * (diameter/2) * (diameter/2);
    costpsq=price/area;
    cout<<"The cost of pizza per square centimeter is $ "<<costpsq<<endl;

    return 0;
}