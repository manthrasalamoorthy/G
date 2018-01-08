#include<stdio.h>
void main()
{
int num,low,high;
printf("Enter the low and high value:");
scanf("%d%d",&low,&high);
for(num=low;num<=high;num++)
if(num%2==0)
{
printf("%d",num);
}
}
