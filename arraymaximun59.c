#include<stdio.h>
int main()
{
int s[100],i,maximun=0,n;
printf("Enter the array size:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
for(i=0;i<n;i++)
{
if(s[i]>maximun)
maximun=s[i];
}
printf("maximum element is %d",maximun);
return 0;
}
