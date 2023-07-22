#include<stdio.h>
int main()
{
    int i,j;
    int n=8;
    int b1=3,b2=3,b3=3,b4=3,b5=3,b6=3,b7=3,b8=3;
    int c1[3]={b1,b2,b3};
    int c2[3]={b4,b5,b6};
    int c3[2]={b7,b8};
    int sum1=0,sum2=0;
    for(i=0;i<3;i++)
    {
        sum1+=c1[i];
        sum2+=c2[i];
    }
    if(sum1==sum2)
    {
        if(b7<b8)
        {
            printf("B7 is def");
        }
        else
        {
            printf("B8 is def");
        }
    }
    else if(sum1<sum2)
    {
        if(b1==b2)
        {
            printf("B3 is def");
        }
        else if(b1<b2)
        {
            printf("B1 is def");
        }
        else
        {
            printf("B2 is def");
        }
    }
    else
    {
        if(b4==b5)
        {
            printf("B6 is def");
        }
        else if(b4<b5)
        {
            printf("B4 is def");
        }
        else
        {
            printf("B5 is def");
        }
    }
}
