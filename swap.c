#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("ENTER TWO VALUES BEFORE SWAPING:%d%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nENTER TWO VALUES AFTER SWAPING:%d%d",a,b);
}
