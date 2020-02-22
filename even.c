#include<stdio.h>
void main()
{
int n1,n2,n3,max;
printf("enter the numbers");
scanf("%d%d%d",&n1,&n2,&n3);
max=(n1>n2)?(n1>n3)?n1:n3:(n2>n3)?n2:n3;
printf("Largest no. is =%d",max);
}



