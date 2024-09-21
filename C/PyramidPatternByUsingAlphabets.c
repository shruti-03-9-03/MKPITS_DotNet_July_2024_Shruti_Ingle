#include <stdio.h>

int main() {
    int iCout, jCout, kCout;
    char ch;

    // Number of rows
    int rows = 4;

    for (iCout = 1; iCout <= rows; iCout++) {
        // Print leading spaces
        for (jCout = iCout; jCout < rows; jCout++) {
            printf("  ");
        }

        // Print increasing part of the alphabet
        ch = 'A';
        for (kCout = 1; kCout <= iCout; kCout++) {
            printf("%c ", ch);
            ch++;
        }

        // Print decreasing part of the alphabet
        ch -= 2;
        for (kCout = 1; kCout < iCout; kCout++) {
            printf("%c ", ch);
            ch--;
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
