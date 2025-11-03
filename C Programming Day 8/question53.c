#include <stdio.h>

int main(void) {
    int mat[3][3];
    int trans[3][3];

    printf("Enter 9 elements for 3x3 matrix (row-wise):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (scanf("%d", &mat[i][j]) != 1) {
                printf("Invalid input\n");
                return 1;
            }
        }
    }

    // compute transpose
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    printf("Original matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Transpose matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
