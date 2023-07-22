#include<stdio.h>
int main()
{
int a[]={1,9,6,4,5};
for(int i=0;i<5;i++)
{
    for(int j=i+1;j<5;j++)
    {
    if(a[i]>a[j])
    {
    printf("\n%d" "," "%d",a[i],a[j]);
    }
}
}
}
