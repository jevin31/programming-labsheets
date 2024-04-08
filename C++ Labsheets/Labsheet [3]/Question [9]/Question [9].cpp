#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter the exam score: ";
    cin>>mark;
    while ((mark < 0) || (mark > 100))
    {
        cout<<"Error! Please enter the exam score again: ";
        cin>>mark;
    }

    if (mark >= 70)
    {
        cout<<"The grade for exam score "<<mark<<" is A"<<endl;
    }
    else if (mark >= 60)
    {
        cout<<"The grade for exam score "<<mark<<" is B"<<endl;
    }
    else if (mark >= 50)
    {
        cout<<"The grade for exam score "<<mark<<" is C"<<endl;
    }
    else if (mark >= 40)
    {
        cout<<"The grade for exam score "<<mark<<" is D"<<endl;
    }
    else
    {
        cout<<"The grade for exam score "<<mark<<" is F"<<endl;
    }
    return 0;
}