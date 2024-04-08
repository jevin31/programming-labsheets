#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float ladder,wall,rad,deg;
    //This program calculates the length of the wall using trigonometry.
    cout<<"Enter the length of the ladder: ";
    cin>>ladder;
    cout<<"Enter the length of angle of inclination: ";
    cin>>deg;
    rad = deg * (M_PI/180);
    cout<<"The height of the wall is: "<<wall<<endl;
    return 0;
}