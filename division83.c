#include <stdio.h>
int main() 
{
	int num1,num2,i;
	char symbol;
	printf("\n enter the two numbers:\n");
	for(i=1;i<=4;i++)
	{
		scanf("%d %c %d",&num1,&symbol,&num2);
		if(symbol=='/')
		{
			printf("%d\n",num1/num2);
		}
		else
		{
			printf("%d\n",num1%num2);
		}
	}
	return 0;
}
