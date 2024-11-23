#include <stdio.h>

int main() {
    int matrix[3][3] = {0}; // Declare and initialize the 3x3 matrix to zero

    // Filling the matrix with user-given values
    printf("Enter 9 values for the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the matrix
    printf("The 3x3 matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
