#include<iostream>
using namespace std;

class A {
    int a = 4;
    int b = 5;

public:
    int mul() {
        cout << "in class A" << endl;
        int c = a * b;
        cout << "returning c" << endl;
        return c;
    }
};

class B : public A {
public:
    void display() {
        cout << "in class B" << endl;
        int result = mul();
        cout << "Multiplication of a and b is: " << result << endl;
    }
};
int main()
{
    cout<<"in main"<<endl;
    B b;
    cout<<"b.display function"<<endl;
    b.display();
    cout<<"b.mul function"<<endl;
    b.mul();
    return 0;
}