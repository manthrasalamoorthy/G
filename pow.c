#include<stdio.h>
void main()
{
int base,pow,res=1;
printf("enter the base value:");
scanf("%d",&base);
printf("enter the pow value:"):
scanf("%d",&pow);
while(pow!=0)
{
res=res*base;
pow--;
}
printf("answer is :%d",res);
}
