#include <stdio.h>

int main() {
    int i, j;
    int num = 10;
    int row = 4;

    for (i = 1; i <= row; i++) {

        for (j = i; j < row; j++)
            printf("\t");


        for (j = 1; j <= i; j++) {
            printf("%d\t", num);
            num--;
        }

        printf("\n");
    }

    return 0;
}
