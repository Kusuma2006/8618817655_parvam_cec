#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    Student(string n,int r){
        name=n;
        roll=r;
    }
    void show(){
        cout<<"Name:"<<name<<",Roll:"<<roll<<endl;
    }
};
int main(){
    Student s("John",101);
    s.show();
    return 0;
}
