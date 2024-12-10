#include<stdio.h>
int main()
{
    int N=10,k,left;
    printf("N=10\n");
    printf("input value:");
    scanf("%d",&k);
    if(N<=k)
   { 
    
    printf("invalid output!\n");
    printf("the candies left are:%d",N);
   }
else
{
    left=N-k;
    printf("the number of candies:%d\n",N);
    printf("the candies left are:%d\n",left);
}
    return 0;


}