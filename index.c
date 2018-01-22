#include<stdio.h>
int main()
{
int a[100],i,n;
printf("Enter the array size:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i])
}
for(i=0;i<n;i++)
{
printf("%d%d",a[i],i);
}
return 0;
}
