#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter the number of elements";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum+=i*i;
        cout<<"sum:"<<sum<<"\n";
    }
    cout<<"Total sum: "<<sum<<"\n";
    return 0;
}