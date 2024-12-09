/*print the array elements taking the input from the user*/
#include <stdio.h>
int main()
{
    int a[100],i,n=0,sum=0,esum=0,osum=0;
    printf("enter the size of the array:");
  scanf("%d",&n);
   for(int i=0;i<n;scanf("%d",&a[i++]));
   for(int i=0;i<n;i++){
   printf("%d",a[i]);
    esum+=a[i]%2==0 ?esum+a[i]:esum ;
        osum+=a[i]%2==0 ?osum+a[i]:osum;
   }
   
   printf("sum of even is: %d ");
   printf("sum of odd is :%d ");
    return 0;
}