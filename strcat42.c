#include<stdio.h>
#include<string.h>
int main()
{
  char str1[25],str2[25];
  int j=0,k=0;
  printf("\nEnter First String:");
  scanf("%s",str1);
  printf("\nEnter Second String:");
  scanf("%s",str2);
  while(str1[j]!='\0')
  j++;
  while(str2[k]!='\0')
  {
    str1[j]=str2[k];
    k++;
    j++;
  }
  str1[j]='\0';
  printf("\nConcatenated String is %s",str1);
}
