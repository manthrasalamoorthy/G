#include<stdio.h>
int main()
{
int n,l,r;
printf("\nEnter the N value:");
scanf("%d",&n);
printf("\nEnter the L & R value:");
scanf("%d%d",&l,&r);
if(n>=l && n<=r)
{
printf("\nYES");
}
else
{
printf("\nNO");
}
return 0;
}
