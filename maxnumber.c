#include<stdio.h>
int main()
{
int i,n,a[100],max=0;
printf("Enter the array size:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]>max)
{
max=a[i];
}}
printf("%d",max);
return 0;
}
