#include <stdio.h>

int main() {
    int n, i, j, k;

    printf("Enter the order of the square matrices (n): ");
    scanf("%d", &n);

    int A[n][n], B[n][n], sum[n][n], product[n][n];

    // Input elements for Matrix A
    printf("Enter elements of Matrix A (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements for Matrix B
    printf("Enter elements of Matrix B (%d x %d):\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition of matrices
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Multiplication of matrices
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            product[i][j] = 0; // Initialize the product cell
            for (k = 0; k < n; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the sum matrix
    printf("Sum of Matrix A and B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    // Print the product matrix
    printf("Product of Matrix A and B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
