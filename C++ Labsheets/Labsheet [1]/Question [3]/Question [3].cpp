#include <iostream>
using namespace std;
int main()
{
    int userid,score1,score2,average;
    cout<<"Please Enter your id number: ";
    cin>>userid;
    cout<<"Enter your score in CSE1017Y: ";
    cin>>score1;
    cout<<"Enter your score in CSE1019Y: ";
    cin>>score2;
    cout<<"id: "<<userid<<endl;
    cout<<"Score in CSE1017Y: "<<score1<<endl;
    cout<<"Score in CSE1019Y: "<<score2<<endl;
    cout<<"AVERAGE SCORE: "<<(score1+score2)/2<<endl;

    return 0;
}