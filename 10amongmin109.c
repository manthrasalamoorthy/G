#include<stdio.h>
int main()
{
int arr[100],i,minimum,n;
printf("Enter the array elements");
for(i=1;i<=10;i++)
{
scanf("%d",&arr[i]);
}
for(i=1;i<=10;i++)
{
if(arr[i]<minimum)
minimum=arr[i];
}
printf("minimum element is %d",minimum);
return 0;
}
