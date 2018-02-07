#include<stdio.h>
int main()
{
int n,cnt=0,i;
printf("Enter the number:");
scanf("%d",&n);
while(n!=0)
{
	n=n/10;
	++cnt;
}
printf("%d",cnt);
return 0;
}
