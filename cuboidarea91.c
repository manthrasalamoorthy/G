#include<stdio.h>
int main()
{
int l,b,h,tsa;
printf("Enter the length(L),breadh(B),height(H):");
scanf("%d%d%d",&l,&b,&h);
printf("vloume of the cuboid is:%d",l*b*h);
tsa=2*((l*b)+(b*h)+(h*l));
printf("area of the cuboid is:%d",tsa);
return 0;
}
