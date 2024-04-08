/*#include <iostream>
using namespace std;
int main()
{
    float area;
    float radius;
    cout<<"Enter the radius of the circle :"<<endl;
    cin>>radius;
    area=3.142 * radius * radius;
    cout<<"The area of the circle is "<<area<<endl;

    return 0;
}*/
#include <iostream>
using namespace std;

int main()
{
    int d;

    cout<<"Enter a single digit number: ";
    cin>>d;

    while (d < 0 || d > 9)
    {
        cout<<"Invalid input! Please enter a single digit number: ";
        cin>>d;
    }  

    cout<<" "<<d<<d<<d<<d<<endl;
    cout<<" "<<d<<" "<<" "<<d<<endl;
    cout<<" "<<d<<" "<<" "<<d<<endl;
    cout<<" "<<d<<" "<<" "<<d<<endl;
    cout<<" "<<d<<" "<<" "<<d<<endl;        
    cout<<" "<<d<<d<<d<<d<<endl;        
    cout << endl;
    return 0;
}