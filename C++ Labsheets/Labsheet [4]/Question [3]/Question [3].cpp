#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int annualsal,dep,rem,tax;
    cout<<"Please enter the annual salary of the income earner in Rupees: ";
    cin>>annualsal;
    while (annualsal < 0)
    {
        cout<<"Error! Re-enter the annual salary of the income earner in Rupees: ";
        cin>>annualsal;
    }

    cout<<"Please enter the number of dependents of the income earner(0-3): ";
    cin>>dep;
    while (dep < 0|| dep > 3)
    {
         cout<<"Error! Re-enter the number of dependents of the income earner(0-3): ";
         cin>>dep;
    }
    
    switch(dep)
    {
        case 0 : rem = (annualsal - 255000);
        break;
        case 1 : rem = (annualsal - 325000);
        break;
        case 2 : rem = (annualsal - 395000);
        break;
        case 3 : rem = (annualsal - 455000);
        break;
    }
    if (rem > 120000)
    {
        tax = ((50000 * 0.15) + (70000 * 0.2) + ((rem - 120000) * 0.25));
    }
    else if (rem > 50000)
    {
        tax = ((50000 * 0.15) + ((rem - 50000) * 0.2));
    }
    else
    {
        tax = (rem * 0.15);
    }
    cout<<"The tax payable for this income earner is: Rs "<<tax<<endl;
    return 0;
}