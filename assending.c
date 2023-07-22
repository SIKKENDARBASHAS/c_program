#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
      int crr[n];
        for(int i=0;i<n;i++)
        {
            crr[i]=arr[i];
        }
        for (int i = 0; i < n; i++)
        {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        int j=0;
        while(j<n)
        {
            for(int i=0;i<n;i++)
            {
                if(crr[j]==arr[i])
                {
                    printf("%d ",i+1);
                }
            }
            j++;
        }
    return 0;
}
