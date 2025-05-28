#include <iostream>
using namespace std;
class Employee
{
    public:
    int id;
    string name;
    float salry;
    Employee(int i,string n , float s){
        id=i;
        name=n;
        salry=s;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<salry<<endl;
    }
};
int main (void){
    Employee e1=Employee(101,"Sonoo",890000);
    Employee e2=Employee(102,"Nakul",59000);
    e1.display();
    e2.display();
    return 0;
}