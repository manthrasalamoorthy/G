#include<stdio.h>
int main()
{
char str[100];
int i;
printf("Enter the string:");
scanf("%s",str);
if(str[i]=='\n')
{
i++;
}
printf("%d",i+1);
return 0;
}
