#include <iostream>
using namespace std;

int main() 
{
    int i,j,n=4;
    
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<(char)('a'+i)<<" ";
        }
        cout<<endl;
   }
}