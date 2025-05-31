#include<iostream>
using namespace std;
int main(){
    char str[100];
    int v=0,n=0;
    cout<<"Enter a string:";
    cin>>str;
    while(str[n]!='\0'){
    if(str[n]=='a'||str[n]=='e'||str[n]=='i'||str[n]=='o'||str[n]=='u'|| str[n]=='A'||str[n]=='E'||str[n]=='I'||str[n]=='O'||str[n]=='U')
    {
      v++;
    }
      n++;
}
cout<<"The number of vowels in the string is:"<<v<<endl;
    
    return 0;
    
}