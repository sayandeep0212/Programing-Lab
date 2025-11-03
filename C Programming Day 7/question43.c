#include <stdio.h>

int main() {
    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);

    switch (age >= 18) {
        case 1:
            printf("You are eligible to vote.\n");
            break;
        case 0:
            if (age >= 0)
                printf("You are not eligible to vote.\n");
            else
                printf("Invalid input.\n");
            break;
    }

    return 0;
}
