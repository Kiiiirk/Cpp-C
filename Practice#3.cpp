#include <stdio.h>

int factorial(int n)
{
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main()
{
    int n, result;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    result = factorial(n);
    printf("%d! = %d\n", n, result);
    return 0;
}

