#include<stdio.h>
int main()
{
int a,b,t;
printf("Enter the a,b values:");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("\nafter swaping %d %d",a,b);
return 0;
}
