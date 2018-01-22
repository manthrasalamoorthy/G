#include<stdio.h>
int main()
{
int a[100],i,min,n;
printf("Enter the array sizeL:");
scanf("%d",&n);
printf("Enter the array elements");
for(i=-;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<min)
min=a[i])
}
printf("minimum element is %d",min);
return 0;
}
