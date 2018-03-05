#include <stdio.h>
int main()
{
    int num1, num2, minm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    minm = (n1>n2) ? num1 : num2;
    while(1)
    {
        if( minm%num1==0 && minm%num2==0 )
        {
            printf("The LCM of %d and %d is %d.", num1, num2,minm);
            break;
        }
        ++minm;
    }
    return 0;
}
