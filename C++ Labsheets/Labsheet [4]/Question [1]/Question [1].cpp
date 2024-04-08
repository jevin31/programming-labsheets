#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x,y,charge;
    int numadults,numchildren;
    char mem;
    cout<<"Please enter the price per session for an adult: ";
    cin>>x;
    cout<<"Please enter the price per session for a child: ";
    cin>>y;
    cout<<"Is the head of the family a member of the swimming club (Please answer in 'Y' or 'N')?";
    cin>>mem;

    while (!(mem == 'Y'||mem =='N'))
    {
        cout<<"Error! Is the head of the family a member of the swimming club (Please answer in 'Y' or 'N')?";
        cin>>mem;
    }
    cout<<"Please enter the number of adults: ";
    cin>>numadults;
    cout<<"Please enter the number of children: ";
    cin>>numchildren;
    switch(mem)
    {
        case 'Y': charge = ((numadults * x) + (numchildren * y));
        break;
        case 'N': charge = ((numadults * 2 * x) + (numchildren * 1.5 * y));
        break;
    }
    cout<<"The total charge for the session is: "<<charge<<endl;
    return 0;
}
