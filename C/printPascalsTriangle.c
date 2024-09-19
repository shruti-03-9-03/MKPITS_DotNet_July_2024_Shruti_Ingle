#include <stdio.h>

// Function to print Pascal's triangle
void printPascalsTriangle(int rows) {
    int coef = 1;

    for (int iCout = 0; iCout < rows; iCout++) {
        // Print leading spaces
        for (int space = 1; space <= rows - iCout; space++)
            printf(" ");

        // Print coefficients of the current row
        for (int jCout = 0; jCout <= iCout; jCout++) {
            if (jCout== 0 || jCout == iCout) {
                coef = 1; // The first and last coefficient in each row is 1
            } else {
                coef = coef * (iCout - jCout + 1) / jCout; // Calculate the coefficient
            }
            printf("%d ", coef);
        }

        printf("\n");
    }
}

int main() {
    int numberOfRows;

    // Input number of rows
    printf("Input number of rows: ");
    scanf("%d", &numberOfRows);

    // Print Pascal's triangle
    printPascalsTriangle(numberOfRows);

    return 0;
}
