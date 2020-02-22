#include<stdio.h>
int main()
{
int side1,side2,side3; 
printf("enter three sides of triangle  \n");
scanf("%d%d%d \n",&side1,&side2,&side3);
if((side1==side2)&&(side2==side3))
{
printf("it is an equilateral triangle \n");
}
else if((side1==side2)||(side2==side3)||(side1==side3))
{
printf("triangle is isosceles triangle \n");
}
else
{
printf("triangle is an scalene \n");
}
return 0;
}
