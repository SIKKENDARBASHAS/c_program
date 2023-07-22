#include<stdio.h>
#include<stdlib.h>
int main()
{
int value,a=0,b=1,c;
scanf("%d",&value);
for(int i=0;i<=value;i++)
{
 printf(" %d",a);
 c=a+b;
 a=b;
 b=c;
}
}
