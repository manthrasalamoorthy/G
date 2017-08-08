#include<stdio.h>
void main()
{
int num,i;
printf("enter the number:");
scanf("%d",&num);
for(i=(num-1);i>=0;i--)
num+=i;
printf("%d",num);
}
