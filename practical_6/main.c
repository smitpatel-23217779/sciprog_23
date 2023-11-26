#include <stdio.h>

int main(){
    // Define matrix dimensions
    int n=5, p=3, q=4;

    // Declare matrices A, B, and C
    double A[n][p], B[p][q], C[n][q];

    // Initialize matrix A 
    int i, j;
    for(i=0; i<n; i++) {
        for(j=0; j<p; j++) {
            A[i][j]= i+j;
        }
    }

    // Initialize matrix B 
    for(i=0; i<p; i++) {
        for(j=0; j<q; j++) {
            B[i][j]= i-j;
        }
    }

    // Initialize matrix C with zero
    for(i=0; i<n; i++) {
        for(j=0; j<q; j++) {
            C[i][j]= 0.0;
        }
    }

    // Perform matrix multiplication: C = A * B
    matmult(n, p, q, A, B, C);

    // Display matrix A
    printf("\n this is matrix A:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<p; j++) {
            printf(" %3.0f ", A[i][j]);
        }
        printf("\n");
    }

    // Display matrix B
    printf("\n this is matrix B:\n");
    for(i=0; i<p; i++) {
        for(j=0; j<q; j++) {
            printf(" %3.0f ", B[i][j]);
        }
        printf("\n");
    }

    // Display result matrix C
    printf("\n this is matrix C:\n");
    for(i=0; i<n; i++) {
        for(j=0; j<q; j++) {
            printf(" %3.0f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
