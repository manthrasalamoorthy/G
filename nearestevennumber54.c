#include <stdio.h>
 
int main()
{
   int num;
 
   printf("Enter an integer\n");
   scanf("%d", &num);
    if(num%2!=0)
    num=num-1;
    else
    num=num-2;
    printf(" Nearest even number is %d",num);
    return 0;
}
