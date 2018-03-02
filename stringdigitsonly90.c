#include<stdio.h>
#include<string.h>
int main()
{
int n,i;
char str[10];
printf("Enter the string:");
scanf("%s",str);
n=strlen(str);
for(i=0;i<n;i++)
{
if(str[i]>='0' && str[i]<='9')
{
printf("%c",str[i]);
}}
return 0;
}
