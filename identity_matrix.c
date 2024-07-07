#include <stdio.h>

int main() {
    int n, i, j;
    int flag = 1;

    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j && matrix[i][j] != 1) {
                flag = 0;
                break;
            } 
        }
        
    }

    if (flag == 1) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}
