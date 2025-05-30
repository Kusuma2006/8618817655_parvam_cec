#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    try
    {
        if(age<18)
        throw(age);
        else
        cout<<"Access given";
    }
    catch(int a)
    {
        cout<<"Access denied:Minimum age must be 18,but your age "<<age;
    }
    return 0;
}