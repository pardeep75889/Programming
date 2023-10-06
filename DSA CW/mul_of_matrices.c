#include <stdio.h>

int main() {
    int m, n, p, q;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication is not possible. The number of columns of the first matrix must equal the number of rows of the second matrix.\n");
        return 1;
    }

    int firstMatrix[m][n], secondMatrix[p][q], resultMatrix[m][q];

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }

    printf("Multiplication of these two matrices:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}