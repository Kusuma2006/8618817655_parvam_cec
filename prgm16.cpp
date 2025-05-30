#include <iostream>
using namespace std;

class Calculator{
    public:
    void add(int a,int b);
};

void Calculator::add(int a,int b){
cout<<"The sum is :"<<a+b<<endl;
}


int main() {
    Calculator calc;
    calc.add(10,20);             
    return 0;
}