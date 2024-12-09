/*summation of n numbers using loop*/
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("first%d natural numbers are:\n",n);
    for(i=1;i<=n;i++);{
        sum=sum+i;
        printf("%d\n",i);
    }
    printf("sum=%d",n,sum);
    return 0;
}