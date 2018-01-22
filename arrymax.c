#include<stdio.h>
int main()
{
int a[100],i,max=0,n;
printf("Enter the array size:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
printf("maximum element is %d",max);
return 0;
}
