#include<stdio.h>
int main()
{
int max(int a,int b);
int big,n1,n2;
printf("enter two nos.");
scanf("%d%d",&n1,&n2);
big=max(n1,n2);
printf("big=%d",big);
return 0;
}
int max(int a,int b)
{
int big;
if(a>b)
return a;
else
return b;
}
