#include<iostream>
using namespace std;
int main()
{
    int num,den;
    cout<<"Enter 2 numbers"<<endl;
    cin>>num>>den;
    try
    {
     if(den==0)
     throw(den);
     else
     cout<<num/den;
    }
        catch(int d )
    {
        cout<<"Division by zero error:cannot divide  "<<d;
    }
    return 0;
    
}