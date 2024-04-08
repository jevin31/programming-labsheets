#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int score;
    cout<<"Enter the quiz score: ";
    cin>>score;
    switch (score)
    {
        case 0 : cout<<"Grade: F"<<endl;
        break;
        case 1 : cout<<"Grade: E"<<endl;
        break;
        case 2 : cout<<"Grade: D"<<endl;
        break;
        case 3 : cout<<"Grade: C"<<endl;
        break;
        case 4 : cout<<"Grade: B"<<endl;
        break;
        case 5 : cout<<"Grade: A"<<endl;
        break;
        default: cout<<"You did not enter a valid score!"<<endl;
    }
    return 0;
}