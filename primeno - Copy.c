#include<stdio.h>
void main()
{
 int num,flag=0,i=2;
 printf("enter a number");
 scanf("%d",&num);
  if(num==1)
  {
  printf("no. is composite and not not prime \n");
  }
  else
  {
  while(i<num)
  {
  if(num%i==0)
  {
  flag==1;
  break;
  }
  i++;
  
  if(flag==0)
  {
   printf("no. is a prime no.");
   }
   else
  {
printf("no. is not a prime");
  }
  }
}
