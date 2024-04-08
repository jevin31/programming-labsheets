#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int years,salary,cc,allowance;
    bool eligible;

    cout<<"Please enter the salary of the employee: ";
    cin>>salary;
    while ((salary < 5000) || (salary > 100000))
    {
        cout<<"Error! Please re-enter the salary of the employee: ";
        cin>>salary;
    }

    cout<<"Please enter the number of years of service of the employee: ";
    cin>>years;
    while (years < 0)
    {
        cout<<"Error! Please re-enter the number of years of service of the employee: ";
        cin>>years;
    }

    if (salary = 75000)
    {
        cc = 2000;
        allowance = 10000;
        eligible = 1;
    }
    else if (salary = 60000)
    {
        cc = 1800;
        allowance = 8000;
        eligible = 1;
    }
    else if (salary = 50000)
    {
        cc = 1800;
        allowance = 8000;
        eligible = 1;
    }
    else if (salary = 60000)
    {
        if (years >= 10)
        { 
            cc = 1800;
            allowance = 8000;
            eligible = 1;
        }
        else 
        {
            cc = 1600;
            allowance = 6000;
            eligible = 1;
        }
    }
    else if (salary = 40000)
    {
        if (years >= 20)
        {
            cc = 1500;
            allowance = 5000;
            eligible = 1;
        }
        else 
        {
            eligible = 0;
        }
    }
    else if (salary = 30000)
    {
        if (years >= 25)
        {
            cc = 1400;
            allowance = 4000;
            eligible = 1;
        }
        else 
        {
            eligible = 0;
        }
    }
    else 
    {
        eligible = 0;
    }
    return 0;
}