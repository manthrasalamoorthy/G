#include <stdio.h>
#include<string.h>
int main() 
{
	char s[50],t[50];
	int i,k,j;
	printf("\nEnter the string:");
	scanf("%s",&s);
	for(i=0;s[i]!='\0';i++)
	{
	for(j=i+1;s[j]!='\0';j++)
	{
	if(s[i]>s[j])
	{
	t[k]=s[i];
	s[i]=s[j];
	s[j]=t[k];
	}}}
	printf("\n%s",s);
	return 0;
  }
