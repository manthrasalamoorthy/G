#include<stdio.h>
int main()
{
int num,n1;
printf("Enter the number:");
scanf("%d",&num);
n1=num+1;
while(n1!=0)
{
if(n1%10==0)
{
	printf("%d",n1);
	break;
	
	
}
n1++;
}
return 0;
}
