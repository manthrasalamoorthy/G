#include<stdio.h>
int main()
{
int num,a,b,c,d;
printf("Enter the number:");
scanf("%d",&num);
if(num!=0)
{
	a=num/100;
	b=num%100;
	c=b/10;
	d=b%10;
	printf("%d %d %d",a,c,d);

}
return 0;
}
