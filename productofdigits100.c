#include<stdio.h>
int main()
{
int n,prod=1,rem;
printf("Enter the number:");
scanf("%d",&n);
while(n!=0)
{
	rem=n%10;
	prod=prod*rem;
	n=n/10;

}
printf("The product of each digits are:%d",prod);

return 0;
}
