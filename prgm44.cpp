#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of years:";
    cin>>n;
    int years[n];
    cout<<"Enter"<<n<<"years:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>years[i];
    }
    cout<<"leap years are:\n";
    for(int i=0;i<n;i++)
    {
        int year=years[i];
        if((year%4==0&&year%100!=0)||(year% 400==0)){
            cout<<year<<" ";
        }
    }
    cout<<endl;
    return 0;
}