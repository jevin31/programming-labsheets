#include <iostream>
using namespace std;
int main()
{
    float h,r,h1,h2,r1,r2,v,v1,v2,voc,x,y,c,cost;
    const double pi=3.142;
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
    v=pi*r*r*h;
    v1=pi*r1*r1*h1;
    v2=pi*r2*r2*h2;
    voc=v-(v1+v2);
    cout<<"The volume of concrete to constuct the pillar: "<<voc<<endl;
    cout<<"Please enter the value of y: ";
    cin>>y;
    cout<<"Pleae enter the cost of a container: ";
    cin>>c;
    x=voc/y;
    cost=x*c;
    cout<<"The cost of concrete pillar is:"<<cost<<endl;
    return 0;
}