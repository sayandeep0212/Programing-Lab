#include<stdio.h>
int main() {
    int l, u, i, j;
    printf("Enter The Lower Limit:");
    scanf("%d", &l);
    printf("Enter The Upper Limit:");
    scanf("%d", &u);
    printf("Prime numbers between %d and %d are: ", l, u);
    for (i = l; i <= u; i++) {
        if (i == 1 || i == 0)
            continue;
        int isPrime = 1; 
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
}