#include <stdio.h>

int fibonacci(int n);
void printFibonacci(int n);

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    printFibonacci(n);
    printf("\n");
    
    return 0;
}

int fibonacci(int n) {
    if (n <= 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacci(int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
}