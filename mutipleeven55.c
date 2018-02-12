#include<stdio.h>
int main()
{
int n,m;
printf("Enter the two numbers:");
scanf("%d%d",&n,&m);
if(n*m%2==0)
{
printf ("even");
}
else
printf("odd");
return 0;
}
