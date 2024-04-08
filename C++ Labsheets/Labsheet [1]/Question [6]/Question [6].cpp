#include <iostream>
using namespace std;
int main()
{
    float h,r,h1,h2,r1,r2,v,v1,v2,voc;
    cout<<"Enter the height of cylindrical pillar: ";
    cin>>h;
    cout<<"Enter the radius of cylindrical pillar:";
    cin>>r;
    cout<<"Enter the height of small cylindrical hole: ";
    cin>>h1;
    cout<<"Enter the radius of small cylindrical hole:";
    cin>>r1;
    cout<<"Enter the height of big cylindrical hole: ";
    cin>>h2;
    cout<<"Enter the radius of big cylindrical hole:";
    cin>>r2;
    v=3.142*r*r*h;
    v1=3.142*r1*r1*h1;
    v2=3.142*r2*r2*h2;
    voc=v-(v1+v2);
    cout<<"The volume of concrete to constuct the pillar: "<<voc<<endl;
    return 0;
}