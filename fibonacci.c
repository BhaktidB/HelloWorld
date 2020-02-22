#include<stdio.h>
int main()
{
int n,a,b,c,i;
a=0;
b=1;
i=1;
printf("enter the number");
scanf("%d",&n);
  while(i<=n)
  {
   printf("%d\n",a);
   c=a+b;
   a=b;
   b=c;
   i++;
   }
return 0;
 }
