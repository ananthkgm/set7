#include<stdio.h>
int main()
{
int a;
printf("enter a number:");
scanf("%d",&a);
if((a%7)==0)
{
    printf("it is multiple of 7");
}
else
{
    printf("it is not multiple of 7");
}
return 0;
}
