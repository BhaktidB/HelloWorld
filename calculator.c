#include<stdio.h>
int main()
{
int num1,num2,result;
char choice;

printf("to calculate: press + for addition \n press - for subtraction \n press * for multiplication \n press / for division \n press %% for  modulus \n");
scanf("%c",&choice);
printf("enter two numbers \n");
scanf("%d%d",&num1,&num2);
switch(choice)
{
case '+':
result=num1+num2;
break;
case '-':
result=num1-num2;
break;
case '*':
result=num1*num2;
break;
case '/':
result=num1/num2;
break;
case '%':
result=num1%num2;
break;
default:
printf("invalid choice");
}
printf("result:%d",result);
return 0;
}
