// c program to generate numerical pattrens
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}