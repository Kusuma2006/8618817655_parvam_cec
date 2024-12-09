/*print the array elements taking the input from the user*/
#include <stdio.h>
int main()
{
    int a[100],i,n=0,sum=0;
    printf("enter the size of the array");
  scanf("%d",&n);
   for(int i=0;i<n;scanf("%d",&a[i++]));
   for(int i=0;i<n;printf("%d",a[i]),sum+=a[i++]);
   printf("sum of elements is %d",sum);
    return 0;
}