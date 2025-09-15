#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series upto %d terms: ",n);
    if(n <= 0) {
        printf("Invalid Inputs,Please enter a positive integer.\n");
    }
    else if (n == 1) {
        printf("%d\n", first);
    }
    else{
    printf("%d, %d ", first, second);
    for (i = 2; i < n; i++) {
        next = first + second;
        printf(" ,%d ", next);
        first = second;
        second = next;
        }
        printf("\n");
    }
}