#include <stdio.h>

void printRecursive(int n) {
    if(n <= 0)
    {
        return;
    }
    printf("%d ", 2*n);
    printf("%d ", 2*n-1);
    printRecursive(n - 1);
}

int main() {
    int num = 5;
    printf("Printing the sequence:\n");
    printRecursive(num);
    return 0;
}
