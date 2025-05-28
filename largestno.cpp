#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<"enter the values of n1,n2,n3:";
    cin>>n1>>n2>>n3;
    if(n1>n2)
    {
        cout<<n1<<"is largest number"<<endl;
    }
    else if(n1>n3)
    {
        cout<<n2<<"is largest number"<<endl;
    }
    else
    {
        cout<<n3<<"is largest number"<<endl;
    }
    return 0;

}