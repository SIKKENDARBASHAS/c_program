int main()
{
    int arr[100], n, i, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
    scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element you want to delete: ");
    scanf("%d", &pos);
    for (i = pos-1; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    printf("The updated array is: ");
    for (i = 0; i < n; i++)
        {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
