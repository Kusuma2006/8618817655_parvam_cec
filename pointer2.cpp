#include<iostream>
using namespace std;
int main()
{
    string var1="Students";
    string *p;
    p=&var1;
    cout<<"Value of p variable is :"<<*p<<endl;
    return 0;
}