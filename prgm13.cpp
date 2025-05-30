#include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
};
int main()
{
    person p;
    cout<<"Enter the name:";
    cin>>p.name;
    cout<<"Enter the age:";
    cin>>p.age;
    cout<<"\nperson details"<<endl;
    cout<<"name:"<<p.name<<endl;
    cout<<"age"<<p.age<<endl;
    return 0;
}