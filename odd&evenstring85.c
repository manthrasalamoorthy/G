#include <stdio.h>
#include<string.h>
int main() 
{
	char s[20];
	int i,l;
	printf("\nenter the string:\n");
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(i%2==0)
		{
			printf("%c",s[i]);
		}
		
	}
	printf(" ");
	for(i=0;i<l;i++)
	{
		if(i%2==1)
		{
			printf("%c",s[i]);
		}
		
	}
	
	return 0;
}
