#include<stdio.h>
int main()
{
	int n,n1,b,c;
	
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	n1=pow(2,i);
	if(n1>n)
	{
	c=pow(2,i);
   break;
	}
	}
	printf("\n%d",c);
  return 0;
}
