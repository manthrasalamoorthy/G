#include<stdio.h>
void main()
{
int num,c;
printf("enter the number:");
sacnf("%d",&num);
while(num!=0)
{
num=num/10;
c++;
}
printf("the no.of digits is:%d",c);
}
