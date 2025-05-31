#include<iostream>
using namespace std;
int main(){
    char str[100],newstr[100];
    int n=0,j=0;
    cout<<"Enter a string:";
    cin>>str;
    while(str[n]!='\0'){
        bool found=false;
        for(int i=0;i<j;i++){
            if(str[n]==newstr[i]){
                found=true;
                break;
            }
        }
        if(!found){
            newstr[j]=str[n];
            j++;
        }
        n++;
    }
    newstr[j]='\0';
    cout<<"String after removing duplicates:"<<newstr<<endl;
    return 0;
}