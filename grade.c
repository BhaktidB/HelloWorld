#include<stdio.h>
int main()
{
int marks;
printf("enter marks");
scanf("%d",&marks);
if(marks>=70)
{
printf("grade A \n");
}
else if(marks>=60)
{
printf("grade B \n");
}
else if(marks>=50)
{
printf("grade C \n");
}
else if(marks>=40)
{
printf("grade D \n");
} 
else
{
printf("FAIL \n");
}
return 0;
}
