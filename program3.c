#include<stdio.h>
int main()
{
  int n,x;
  int num;
  int pos;
  int arr[50];
  printf("Enter the number of elements:");
  scanf("%d",&n);
  {
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("enter the number to insert:");
    scanf("%d",&x);
    printf("enter the position:\n");
    scanf("%d",&pos);
    for ( int i = n-1; i >= pos-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos-1] = x;
    n++;
    printf("The updated array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
    }
}


