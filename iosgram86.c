#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int i,l,flag=0;
printf("Enter the string:");
scanf("%s",&s);
l=strlen(s);
for(i=0;i<=l;i++)
{
if(s[i]==s[i+1])
{
flag=1;
}
break;
}
if(flag==1)
{
printf("NO");
}
else
{
  printf("YES");
}
return 0;
}
