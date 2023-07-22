#include <stdio.h>
int main()
{
  int n;
  int arr[50];
  printf("Enter the number of elements:");
  scanf("%d",&n);
  for(int i=0;i<n;i++) {
    printf("Enter number %d: ");
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++)
    {
    if(arr[0]>arr[i])
    {
      arr[0]=arr[i];
    }
  }
  printf("smallest number is = %d", arr[0]);
  return 0;
}

