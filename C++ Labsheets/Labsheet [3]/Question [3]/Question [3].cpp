#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int hours,extra,totalwages;
    cout<<"Enter the number of hours worked: ";
    cin>>hours;
    if (hours <= 40)
    {
        totalwages = (hours * 100);
    }
    else
    {
        extra = (hours - 40);
        totalwages = ((40 * 100) + (extra * 150));
    }
    cout<<"Total wages for the week is: Rs "<<totalwages<<endl;
    return 0;
}