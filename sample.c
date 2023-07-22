#include<stdio.h>
int main()
{
    int a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int brr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&brr[i]);
    }
    for(int i=0;i<a;i++)
    {
        if((arr[i]+brr[i])<6)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}
