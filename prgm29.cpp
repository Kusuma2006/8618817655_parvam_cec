#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string text;
    ifstream MyFile("C:\\Users\\140\\Desktop\\bobs\\sample.txt");
    getline(MyFile,text);
    cout<<text;
    MyFile.close();
    return 0;
}