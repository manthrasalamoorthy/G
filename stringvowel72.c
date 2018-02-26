#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i=0,f;
printf("Enter the string:");
scanf("%s",str);
while(str[i]!='\0')
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
f=1;
i++;
}
if(f==1)
{
printf("YES");
}
else
{
printf("NO");
}
return 0;
}
