#include <stdio.h>

int main() {
    int m, n, p, q;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &p, &q);
    if ( m != p || n != q)
    {
        printf("Addition of these matrices is not possible because the number of rows and columns are not same. \n");
    }
    else
    {
        int firstMatrix[m][n], secondMatrix[p][q], resultMatrix[m][q];

        printf("Enter the elements of first matrix : \n");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &firstMatrix[i][j]);
            }
        }

        printf("Enter the elements of second matrix : \n");
        for (int i = 0; i < p; i++) {
            for(int j = 0; j < q; j++) {
                scanf("%d", &secondMatrix[i][j]);
            }
        }
        //Addition of these matrices
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            }
        }
        printf("Addition of these matrices : \n");
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                printf("%d\t", resultMatrix[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}