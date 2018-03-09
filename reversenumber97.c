#include<stdio.h>
int main()
{
int num,rem,rev=0,n;
printf("Enter the number:");
scanf("%d",&num);
n=num;
while(num!=0)
{
	rem=num%10;
	rev=(rev*10)+rem;
	num=num/10;
	
}
printf("the reverse of the number %d is %d",n,rev);
return 0;
}
