#include <stdio.h>

int main() {
    int n;
    char ch;

    printf("Enter Your Number:\n");
    scanf("%d", &n);

    printf("Choose an option:\n");
    printf("b = Buzz Number check\n");
    printf("e = Even or Odd check\n");
    printf("p = Positive or Negative check\n");
    printf("Enter your choice: ");
    scanf(" %c", &ch);

    switch (ch) {
        case 'b':
            if (n % 10 == 7 || n % 7 == 0) {
                printf("Buzz Number\n");
            } else {
                printf("Not a Buzz Number\n");
            }
            break;

        case 'e':
            if (n % 2 == 0) {
                printf("Even Number\n");
            } else {
                printf("Odd Number\n");
            }
            break;

        case 'p':
            if (n >= 0) {
                printf("Positive Number\n");
            } else {
                printf("Negative Number\n");
            }
            break;

        default:
            printf("Invalid Choice\n");
            break;
    }

    return 0;
}
