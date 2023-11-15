#include <iostream>
#include <numeric>
const char* dgemv_desc = "Vectorized implementation of matrix-vector multiply.";

/*
 * This routine performs a dgemv operation
 * Y :=  A * X + Y
 * where A is n-by-n matrix stored in row-major format, and X and Y are n by 1 vectors.
 * On exit, A and X maintain their input values.
 */
void my_dgemv(int n, double* A, double* x, double* y) {

 // This will loop through each row in the A Matrix
    for (int row = 0; row < n; ++row) {
        int sum = row * n;

       // Using the inner product will help me do the dot product
       double t = 0;
    for (int j = 0; j < n; ++j) {
    t += A[sum + j] * x[j];
    }
    
    // This will give us the result corresponding in the vector y.
        y[row] += t;
    }
}
