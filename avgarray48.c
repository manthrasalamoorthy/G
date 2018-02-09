#include<stdio.h>
int main()
{
int a[100],n,i,sum=0,avg;
printf("Enter the array size:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("The avg of %d element is %d:",n,avg);
return 0;
}
