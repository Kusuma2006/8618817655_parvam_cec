#include<iostream>
using namespace std;
class rectangle
{
    private:
    int len,breadth;
    public:
    void setValues(int l,int b)
    {
        len=l;
        breadth=b;
    }
    void displayarea()
    {
        cout<<"Area is:"<<len*breadth<<endl;
    }
};
int main()
{
    rectangle r;
    r.setValues(5,7);
    r.displayarea();
    return 0;
}