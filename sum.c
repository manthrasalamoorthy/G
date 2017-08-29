#include<stdio.h>
void main()
{
int n,i;
printf("enter the number:");
scanf("%d",&n);
for(i=(n-1);i>=0;i--)
n+=i;
printf("%d",n);
}
