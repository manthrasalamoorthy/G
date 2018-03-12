#include <stdio.h>
int main() 
{
	int number,i;
	scanf("%d",&number);
	int number1,remainder;
	while(number!=1)
	{
	remainder=number%2;
	number1=number/2;
	printf("%d\n",number1);
	number=remainder;
	break;
	}
	return 0;
}
