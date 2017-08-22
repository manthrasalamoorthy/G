#include<stdio.h>
void main()
{
int num,c=0;
printf("enter the num:");
scanf("%d",&num);
while(num)
{
num=num/10;
c++;
}
printf("the digit is :%d",c);
}
