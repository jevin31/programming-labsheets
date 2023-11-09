#include <iostream>
using namespace std;
int main()
{
    float sp,dc,tc;
    int cups;
    sp=25.00;
    cout<<"Enter the number of cups ordered: ";
    cin>>cups;
    dc = 15.00+(cups*2.50);
    tc=(cups*sp) + dc;
    cout<<"The cost of the order is Rs"<<tc<<endl;
    return 0;
}