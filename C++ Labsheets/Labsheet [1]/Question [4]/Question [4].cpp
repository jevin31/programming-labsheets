#include <iostream>
using namespace std;
int main()
{   int s1,s2,s3,d1,d2,d3,totald;
    float totalt,avgspd;
    cout<<"Enter the distance travelled d1: ";
    cin>>d1;
    cout<<"Enter the speed travelled s1: ";
    cin>>s1;
    cout<<"Enter the distance travelled d2: ";
    cin>>d2;
    cout<<"Enter the speed travelled s2: ";
    cin>>s2;
    cout<<"Enter the distance travelled d3: ";
    cin>>d3;
    cout<<"Enter the speed travelled s3: ";
    cin>>s3;
    totald=d1+d2+d3;
    cout<<"The total distance travelled: "<<totald<<endl;
    totalt= (d1/s1)+(d2/s2)+(d3/s3);
    cout<<"The total time taken: "<< totalt <<endl;
    avgspd= totald/totalt;
    cout<<"The taverage speed over the journey: "<<avgspd<<endl;
    return 0;
}