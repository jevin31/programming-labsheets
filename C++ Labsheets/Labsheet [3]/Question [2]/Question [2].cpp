#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int year,age;
    cout<<"Please input your year of birth: ";
    cin>>year;
    age = (2023 - year);
    if (age < 18)
    {
        cout<<"You are a child aged "<<age<<"!"<<endl;
    }
    else
    {
        cout<<"You are an adult aged "<<age<<" years old!"<<endl;
    }
    return 0;
}