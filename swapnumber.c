#include<stdio.h>
int main()
{
int a,b;
printf("Enter the a,b values:");
scanf("%d%d",&a,&b);
a=a^b;
  b=a^b;
  a=a^b;
printf("\nafter swaping %d %d",a,b);
return 0;
}
