const char* dgemv_desc = "Basic implementation of matrix-vector multiply.";

/*
 * This routine performs a dgemv operation
 * Y :=  A * X + Y
 * where A is n-by-n matrix stored in row-major format, and X and Y are n by 1 vectors.
 * On exit, A and X maintain their input values.
 */

void my_dgemv(int n, double* A, double* x, double* y) {
   // insert your code here: implementation of basic matrix multiply
   // This will loop through the matrix
    for (int i = 0; i < n; ++i) {

   // This will loop through the columns of the matrix
        for (int j = 0; j < n; ++j) {
         // After, this will perform the dot product for the row we're on.
            y[i] += A[i * n + j] * x[j];
        }
    }
}
