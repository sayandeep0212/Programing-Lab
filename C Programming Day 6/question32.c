#include<stdio.h>
int main() {
    int n,sum=0;
    printf("Enter Number:");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++) {
        sum += i;
    }

    printf("Sum is %d", sum);
}