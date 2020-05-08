#include<stdio.h>
int main()
{
int fact(int n);
int n,r,factorial,npr;
printf("enter r");
scanf("%d",&r);
printf("enter n");
scanf("%d",&n);
factorial=fact(n);
npr=factorial/(fact(n-r)*fact(r));
printf("npr=%d",npr);
return 0;
}
int fact(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}
