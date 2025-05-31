#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream MyFile("C:\\Users\\140\\Desktop\\bobs\\sample.txt");
    MyFile<<"Hello World"<<endl;
    MyFile.close();
    return 0;
}