#include<stdio.h>
int main() {
    int unit;
    int category;

    printf("Enter Your Units:");
    scanf("%d", &unit);
    if (unit < 0) {
        category = 0;
    }
    else if (unit <= 100) {
        category = 1;
    }
    else if (unit <= 200) {
        category = 2;
    }
    else {
        category = 3;
    }
    switch(category) {
        case 0:
            printf("Invalid Unit \n");
            break;
        case 1:
            printf(" The Bill is RS 5/unit: %d\n", unit * 5);
            break;
        case 2:
            printf(" The Bill is RS 7/unit: %d\n", unit * 7);
            break;
        case 3:
            printf(" The Bill is RS 10/unit: %d\n", unit * 10);
            break;
        default:
            printf("Invalid Input\n");
            break;

    }
}