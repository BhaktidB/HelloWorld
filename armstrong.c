#include<stdio.h>
int main()
{
int num,a,d,arm=0;
printf("enter num");
scanf("%d",&num);
a=num;
  while(num!=0)
  {
  d=num%10;
  arm=arm+d*d*d;
  num=num/10;
  }
  if(arm==a)
  {
  printf("armstrong");
  }
  else
  {
  printf("not armstrong");
  }
  return 0;
}
