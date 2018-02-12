#include<stdio.h>
void swap(int n1,int n2);
int main()
{
int n1,n2;
printf("\nEnter the two numbers:");
scanf("%d%d",&n1,&n2);
printf("\nBefore swaping:%d %d",n1,n2);
swap(n1,n2);
return 0;
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
printf("\nAfter swaping %d  %d",a,b);
}

