#include <stdio.h>

void multiplication(int m1[20][20], int m2[20][20], int result[20][20], int r1, int c1, int r2, int c2) {
    int i, j, k;
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0; 
            for(k = 0; k < c1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

int main() {
    int m1[20][20], m2[20][20], result[20][20];
    int r1, r2, c1, c2, i, j;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter the first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &m1[i][j]);
        }
    }

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("\nMultiplication not possible...\n");
        return 0;
    }

    printf("Enter the second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }

    multiplication(m1, m2, result, r1, c1, r2, c2);

    printf("Result:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
