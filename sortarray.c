#include<stdio.h>
int main()
{
int i,j,size,a[100],t;
printf("\nEnter the size of the array:");
scanf("%d",&size);
printf("\nEnter the array elements:");
for(i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}}}
printf("\nthe array elements are :");
for(i=0;i<size;i++)
{
printf("%d",a[i]);
}
return 0;
}
