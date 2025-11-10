#include <stdio.h>

struct B {
    char n[50];
    char a[50];
    int i;
    float p;
};

int main() {
    struct B bs[10];
    int j;

    for (j = 0; j < 10; j++) {
        printf("Name: ");
        fgets(bs[j].n, sizeof(bs[j].n), stdin);
        printf("Author: ");
        fgets(bs[j].a, sizeof(bs[j].a), stdin);
        printf("ID: ");
        scanf("%d", &bs[j].i);
        printf("Price: ");
        scanf("%f", &bs[j].p);
        while (getchar() != '\n');
    }

    for (j = 0; j < 10; j++) {
        printf("\nBook %d:\n", j + 1);
        printf("Name: %s", bs[j].n);
        printf("Author: %s", bs[j].a);
        printf("ID: %d\n", bs[j].i);
        printf("Price: %.2f\n", bs[j].p);
    }

    return 0;
}