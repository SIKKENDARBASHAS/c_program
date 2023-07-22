#include <stdio.h>
int main()
{
    int n,arr[n],brr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&brr[i]);
    }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%brr[i]==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
	return 0;
}
