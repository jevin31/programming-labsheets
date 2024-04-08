#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int tariff,units;
    float charge,min;
    
    cout<<"Please enter the tariff number chosen(110,120,140): ";
    cin>>tariff;
    while (!((tariff == 110)||(tariff == 120)||(tariff  == 140)))
    {
        cout<<"Error! Please re-enter the tariff number chosen(110,120,140): ";
        cin>>tariff;
    }

    cout<<"Please enter the number of units: ";
    cin>>units;
    while (units < 0)
    {
        cout<<"Error! Please re-enter the number of units: ";
        cin>>units;
    }

    if (tariff = 110)
    {
        min = 44;
        if (units > 150)
        {
            charge = (min + (25 * 2.75) + (50 * 3.25) + (75 * 4.00) + ((units - 150) * 6.50));
        }
        else if (units > 75)
        {
            charge = (min + (25 * 2.75) + (50 * 3.25) + ((units - 75) * 4.00));
        }
        else if (units > 25)
        {
            charge = (min + (25 * 2.75) + ((units - 25) * 3.25));
        }
        else
        {
            charge = (min + (units * 2.75));
        }
    }
    else if (tariff = 120)
    {
        min = 184;
        if (units > 150)
        {
            charge = (min + (25 * 3.00) + (50 * 3.50) + (75 * 4.25) + ((units - 150) * 6.00));
        }
        else if (units > 75)
        {
            charge = (min + (25 * 3.00) + (50 * 3.50) + ((units - 75) * 4.25));
        }
        else if (units > 25)
        {
            charge = (min + (25 * 3.00) + ((units - 25) * 3.50));
        }
        else
        {
            charge = (min + (units * 3.00));
        }
    }
    else 
    {
        min = 360;
        if (units > 150)
        {
            charge = (min + (25 * 3.25) + (50 * 3.75) + (75 * 4.50) + ((units - 150) * 5.75));
        }
        else if (units > 75)
        {
            charge = (min + (25 * 3.25) + (50 * 3.75) + ((units - 75) * 4.50));
        }
        else if (units > 25)
        {
            charge = (min + (25 * 3.25) + ((units - 25) * 3.75));
        }
        else
        {
            charge = (min + (units * 3.25));
        }
    }
    cout<<"The total amount charged is: Rs "<<charge<<endl;
    return 0;
}