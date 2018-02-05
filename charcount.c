#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int cnt=0,i;
printf("Enter the string:");
scanf("%s",&str);
for(i=0;str[i]!='\0';++i)
{
    if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
    {
        ++cnt;
    }}
printf("%d",cnt);
return 0;
}
