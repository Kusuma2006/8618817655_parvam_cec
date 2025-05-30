#include<iostream>
using namespace std;
class Circle{
    private:
    double radius;
    public:
    Circle(){
        radius=0;
    }
    void inputRadius(){
    cout<<"Enter the radius of the circle:";
    cin>>radius;
}
double calculateArea(){
    return 3.14 *radius*radius;
}
};
int main(){
    Circle c;
    c.inputRadius();
    cout<<"Area of the circle:"<<c.calculateArea()<<endl;
    return 0;
}