#include <stdio.h>
#include<string.h>
 
int main()
{
  int i,t;
  char str[100];
  printf("Enter the string:");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
  	if((str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9'))
  	t=1;
  	else
            t=0;
  }
  if(t==1)
  printf("yes");
  else
  printf("No");
  
  return 0;
  }
