#include<stdio.h>
int main()
{
int a=0,b=1,c=0,n,i;
printf("Enter the number:");
scanf("%d",&n);
printf(" the serious is:");
for(i=0;i<n;i++)
{
a=b;
b=c;
c=a+b;
printf("%d",c);
}
return 0;
}
