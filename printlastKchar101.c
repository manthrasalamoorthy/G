#include <stdio.h>
#include<string.h>
int main()
{
	char s[50];
	int i,n;
	scanf("%s %d",s,&n);
	int l;
	l=strlen(s);
	for(i=n;i<=l;i++)
	{
		printf("%c",s[i]);
	}

	return 0;
}
