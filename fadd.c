#include<stdio.h>
int main()
{
int add(int a,int b);
int num1,num2,sum=0;
printf("enter 2 nos");
scanf("%d%d",&num1,&num2);

sum=add(num1,num2);
printf("sum=%d",sum);
return 0;
}
int add(int a,int b)
{
int sum;
sum=a+b;
return sum;
}
