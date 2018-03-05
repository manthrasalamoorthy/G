#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int i,l,f;
printf("Enter the string:");
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==s[i+1])
f=1;
break;
}
if(f==1)
printf("NO");
else
printf("TES");
return 0;
}
