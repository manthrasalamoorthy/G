#include<stdio.h>
int main()
{
int a[100],n,i,min,max=0;
printf("\nEnter the array size:");
scanf("%d",&n);
printf("\nEnter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];
}
printf("\n The minimum and maximum element in an array is %d %d",min,max);

return 0;
}
