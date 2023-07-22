#include <stdio.h>
int gcd(int a, int b)
 {
    if (b == 0)
     {
        return a;
     }
    else
     {
        return gcd(b,a % b);
     }
}
int main()
 {
    int num1 = 8, num2 = 12;
    int result = gcd(num1, num2);
    printf(" GCD of %d and %d = %d.\n", num1, num2, result);
    return 0;
}
