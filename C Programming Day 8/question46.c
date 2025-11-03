#include <stdio.h>

void sum();

int main() {
    sum();
    return 0;
}

void sum() {
    int sum = 0, i = 1, count = 0;
    while(count != 10) {
        if(i % 2 == 0) {
            sum += i;
            count++;
        }
        i++;
    }
    printf("Sum of first 10 even numbers: %d\n", sum);
}