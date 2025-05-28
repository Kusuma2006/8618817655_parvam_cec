#include <iostream>
using namespace std;
class Shape{
    public:
    float areaRectangle(float length,float width){
        return length*width;
    }
    float areaTriangle(float base,float height){
        return 0.5*base*height;
    }
};
int main(){
    Shape shape;
    float length=10,width=5;
    float base=8,height=6;
    cout<<"Area of Rectangle:"<<shape.areaRectangle(length,width)<<endl;
    cout<<"Area of Triangle:"<<shape.areaTriangle(base,height)<<endl;
    return 0;
}