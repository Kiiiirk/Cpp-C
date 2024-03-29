#include <stdio.h>

int factorial(int n);

int main() {
    int num, result;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    result = factorial(num);
    
    printf("%d! = %d\n", num, result);
    
    return 0;
}

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
