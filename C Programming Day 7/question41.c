#include <stdio.h>

int main() {
    int i, j;
    int n = 3;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j <= n - i + 1)
                printf("%d\t", j);
            else
                printf("\t");
        }

        for (j = n - 1; j >= 1; j--) {
            if (j <= n - i + 1)
                printf("%d\t", j);
            else
                printf("\t");
        }

        printf("\n");
    }

    return 0;
}
