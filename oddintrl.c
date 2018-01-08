#include<stdio.h>
void main()
{
int num,low,high;
printf("Enter the low and high value:");
scanf("%d%d",&low,&high);
printf("The odd numbers between low and high:");
for(num=low;num<=high;num++)
if(num%2==1)
{
printf(" %d ",num);
}
}
