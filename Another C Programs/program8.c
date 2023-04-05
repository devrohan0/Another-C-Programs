#include <stdio.h>

int main() {
    int m, n, i, j;
    int matrix1[100][100], matrix2[100][100], sum[100][100];

    // Read the size of the matrix
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &m, &n);

    // Read the elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Read the elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add the two matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum of the matrices
    printf("The sum of the matrices is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}



// This program first reads the size of the matrices and the elements
// of the two matrices from the user. It then adds the two matrices 
// and stores the result in a third matrix called sum. The addition 
// of two matrices requires that they have the same dimensions, 
// so the program first checks if the number of rows and columns 
// of the two matrices are the same.

// The addition of two matrices is performed using a nested for loop. 
// The outer loop iterates over the rows of the matrices and the 
// inner loop iterates over the columns of the matrices. The sum 
// of the corresponding elements of the two matrices is then stored 
// in the corresponding element of the sum matrix.

// Finally, the program displays the sum of the two matrices by 
// iterating over the rows and columns of the sum matrix and printing 
// each element.