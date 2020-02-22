#include<stdio.h>
int main()
{
char key;
printf("enter a key");
scanf("%c",&key);
if((key>='A')&&(key<='Z'))
{printf("%c is upper case ",key);
}
else if((key>='a')&&(key<='z'))
{
printf("%c is lower case",key);
}
else
{
printf("it is not an alphabet");
}
return 0;
}
