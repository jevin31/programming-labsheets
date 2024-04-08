#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numofyears,numofhours;
    float totalsalary;

    cout<<"Please enter the number of years of service: ";
    cin>>numofyears;
    while (numofyears < 0 || numofyears > 30)
    {
        cout<<"Error! Please enter a valid number of years of service: ";
        cin>>numofyears;
    }

    cout<<"Please enter the number of hours worked in the week: ";
    cin>>numofhours;
    while (numofhours < 0 || numofhours > 60)
    {
        cout<<"Error! Please enter a valid number of hours worked in the week: ";
        cin>>numofhours;
    }
    
    if (numofyears >= 15)
    {
        if (numofhours > 40)
        {
            totalsalary = ((40 * 200) + ((numofhours - 40) * 300));
        } 
        else
        {
            totalsalary = (numofhours * 200);
        }
    }
    else
    {
        if (numofhours > 45)
        {
            totalsalary = (((45 * 150)) + ((numofhours - 45) * 250));
        }
        else
        {
            totalsalary = (numofhours * 150);
        }
    }
    
    cout<<"The total salary for the week is: Rs "<<totalsalary<<endl;
    return 0;
}