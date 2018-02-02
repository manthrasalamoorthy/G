#include<stdio.h>
int main()
{
int n1,n2,t;
printf("Enter the two numbers:");
scanf("%d%d",&n1,&n2);
t=n1;
n1=n2;
n2=t;
printf("after swaping %d %d",n1,n2);
return 0;
}
