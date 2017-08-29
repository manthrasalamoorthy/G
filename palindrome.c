#include<stdio.h>
void main()
{
int num,res=0,rem,n;
printf("enter the number:");
scanf("%d",&num);
n=num;
while(num!=0)
{
rem=num%10;
res=res*10+rem;
num=num/10;
}
if(n==res)
{
printf(" %d is palindrome",n);
}
else
{
printf("% d is not palindrome",n);
}
}
