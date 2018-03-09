#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the A,B,C values:");
scanf("%d%d%d",&a,&b,&c);
printf("The answer (%d * %d)mod %d is :%d",a,b,c,(a*b)%c);


return 0;
}
