#include <iostream>
using namespace std;

int main()
{

    float principle,rate,time,simpleinterest;
    cout<<"Enter the principle amount:";
    cin>>principle;
    cout<<"Enter the rate of interest:";
    cin>>rate;
    cout<<"Enter the time:";
    cin>>time;
    simpleinterest=(principle*rate*time)/100;
    cout<<"simple interest="<<simpleinterest<<endl;
    return 0;
}