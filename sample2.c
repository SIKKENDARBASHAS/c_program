#include<stdio.h>
int main()
{
    printf("enter");
    int a;
    scanf("%d",&a);
    int arr[a];
       int brr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);

    for(int i=0;i<a;i++)
    {
        scanf("%d",&brr[i]);
    }
    }
    for(int i=0;i<a;i++)
    {
        if((arr[i]+brr[i])<=6)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
