#include<stdio.h>
int main()
{
int n1,n2;
printf("Enter the a,b values:");
scanf("%d%d",&n1,&n2);
printf("\nBefore swapingL: %d %d",n1,n2);
n1=n1^n2;
  n2=n1^n2;
  n1=n1^n2;
printf("\nafter swaping %d %d",n1,n2);
return 0;
}
