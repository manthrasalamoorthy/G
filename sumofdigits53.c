#include<stdio.h>
int main()
{
int num,a,b,c,d,sum;
printf("Enter the number:");
scanf("%d",&num);
if(num!=0)
{
	a=num/100;
	b=num%100;
	c=b/10;
	d=b%10;
	printf("\nThe digits are %d %d %d ",a,c,d);
	
	}
	sum=a+c+d;
	printf("\n The sum of all digits are %d",sum);
return 0;
}
