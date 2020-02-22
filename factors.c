#include<stdio.h>
int main()
{
int n,i=1;

printf("enter a no  ");
scanf("%d",&n);
  while(i<=n)
  {
    if(n%i==0)
    {
    printf("\n%d\n",i);
    }
    i++;
   }
   return 0;
   }
