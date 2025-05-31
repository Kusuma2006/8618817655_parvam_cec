#include<iostream>
#include<string>
using namespace std;
int main(){
    string input;
    cout<<"Enter a string";
    getline(cin,input);
    int length =input.length();
    cout<<"Length of the string is:"<<length<<endl;
    return 0;
}