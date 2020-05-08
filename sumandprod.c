#include<stdio.h>
int main()
{
int sum=0,prod=1,num,d;
printf("enter num");
scanf("%d",&num);
do
{
d=num%10;
sum=sum+d;
prod=prod*d;
num=num/10;
}while(num!=0);
printf("sum=%d prod=%d",sum,prod);
return 0;
}
