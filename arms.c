#include<stdio.h>
void main()
{
int num,res=0,rem,c;
printf("enter the number:");
scanf("%d",&num);
c=num;
while(num!=0)
{
rem=num%10;
res=res+rem*rem*rem;
nunum/10;
}
if(res==c)
{
printf("yes");
}
else
printf("no");
}
