#include<stdio.h>
int main()
{
    int a[5];
    printf("array elements:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("array elements are :");
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}
