#include <iostream>
#include <math.h>  
using namespace std;
int main()
{
    int n,dig,i;
    cout<<"please enter the number:";
    cin>>n;
    while(n>0)
    {
        dig=n%2;
        cout<<dig<<"\n";
        n=n/2;
        cout<<"binary number:"<<n<<"\n";
    }
}