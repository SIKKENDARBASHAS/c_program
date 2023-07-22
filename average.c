#include <stdio.h>
int main() {
    int arr[100];
    int len, sum = 0;
    int avg;
    scanf("%d", &len);
    printf("%d\n", len);
    for (int i = 1; i <=len; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <=len; i++)
    {
        sum += arr[i];
    }
    avg = sum / len;
    printf(" average %d \n", avg);
    printf("the next index is %d.\n", arr[(int)avg+1]);
}





