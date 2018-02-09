#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int count=0,j;
printf("Enter the paragraph\n");
scanf("%[^\n]s",str);
for(j=0;str[j]!='\0';j++)
{
if(str[j]=='.')
count++;
}
printf("Number of lines in paragraph are:%d\n",count);
}
