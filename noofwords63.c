#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int i,cnt=0,cd,ca,cs;
printf("Enter the string:");
scanf("%s",&str);
for(i=0;str[i]!='\0';i++)
{
 
        if(str[i]>='0' && str[i]<='9')
            cd++;
        else if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
            ca++;
        else if(str[i]==' ')
            cs++;
            cnt++;
}
printf("%d",cnt);
return 0;
}
