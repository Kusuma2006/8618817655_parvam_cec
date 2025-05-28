#include <iostream>
using namespace std;

int main() 
{
    int i,j,n=4;
    char ch='a';
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
   }
}