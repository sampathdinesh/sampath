#include<stdio.h>
int main()
{
int x,p,n=10,y,total;
printf("enter the x value");
scanf("%d",&x);
y=x*n/100;
p=x-y;
total=x-p;
if(p>=2)
{
printf("the cost of the coffee is:%d",total);
}
else
{
printf("coffee is free");
}
retutn 0;
}
