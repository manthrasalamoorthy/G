#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int cnt;
printf("Enter the string:");
scanf("%s",&str);
cnt=strlen(str);
printf("%d",cnt);
return 0;
}
