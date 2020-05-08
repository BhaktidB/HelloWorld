#include<stdio.h>
int main()
{
int num,a,rev=0;
printf("enter no.");
scanf("%d",&num);
a=num;
do
{
rev=rev*10;
rev=rev+num%10;
num=num/10;
}
while(num!=0);

if(a==rev)
{printf("palindrome");
}
else{
printf("not palindrome");
}
return 0;
}
