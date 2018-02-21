#include<stdio.h>
#include<string.h>
int main()
{
char str[10];
int i,t=0,n;
printf("Enter the string:");
scanf("%s",&str);
n=strlen(str);
for(i=0;i<n;i++)
{
if(str[i]=='0'||str[i]=='1')
t++;
}
if(t>0)
printf("YES");
else
printf("NO");
return 0;
}
