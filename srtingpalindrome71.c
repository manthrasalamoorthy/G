#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int l,i,cnt=0;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==str[l-i-1])
        {
            cnt++;
        }
    }
    if(l==cnt)
    {
        printf("yes..it is palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
	return 0;
}
