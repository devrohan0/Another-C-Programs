/* #include <stdio.h>

int main() {
    int m, n, i, j;
    int matrix1[100][100], matrix2[100][100], diff[100][100];

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

    // Subtract the two matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Display the difference of the matrices
    printf("The difference of the matrices is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/


/*This program first reads the size of the matrices and the elements 
of the two matrices from the user. It then subtracts the second 
matrix from the first matrix and stores the result in a third 
matrix called diff. The subtraction of two matrices requires that 
they have the same dimensions, so the program first checks if the 
number of rows and columns of the two matrices are the same.

The subtraction of two matrices is performed using a nested for loop. 
The outer loop iterates over the rows of the matrices and the inner 
loop iterates over the columns of the matrices. The difference of 
the corresponding elements of the two matrices is then stored in 
the corresponding element of the diff matrix.

Finally, the program displays the difference of the two matrices 
by iterating over the rows and columns of the diff matrix and 
printing each element.*/



#include <stdio.h>

int main() {
    int a[2][2], b[2][2], subt[2][2];
    int i , j ;

    // Read the elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Read the elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Difference of matrices:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            subt[i][j] = a[i][j] - b[i][j];
            printf("%d ", subt[i][j]);
        }
        printf("\n");  // move to a new line after each row is printed
    }

    return 0;
}







