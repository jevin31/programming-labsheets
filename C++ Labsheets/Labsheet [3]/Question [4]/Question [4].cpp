#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int entrytime,leavingtime,extra,bill;
    cout<<"Enter the time of entry: ";
    cin>>entrytime;
    cout<<"Enter the time of leaving: ";
    cin>>leavingtime;
    if (leavingtime <= 21)
    {
        bill = ((leavingtime - entrytime) * 250);
    }
    else
    {
        extra = (leavingtime - 21);
        bill = (((21 - entrytime) * 250) + (extra * 175));
    }
    cout<<"The total baby-sitting bill is: Rs "<<bill<<endl;
    return 0;
}