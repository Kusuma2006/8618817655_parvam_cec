#include <iostream>
using namespace std;

class Base{
    protected:
    int number;
};
class Derived:public Base{
    public:
    void setAndShowNumber(){
        number=100;
        cout<<"The number is:"<<number<<endl;
    }
};
int main(){
    Derived obj;
    obj.setAndShowNumber();
    return 0;
}