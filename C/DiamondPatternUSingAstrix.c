#include <stdio.h>

int main() {
    int number, icout, jcout, space;

    // Input number of rows for the upper half of the diamond
    printf("Enter the number of rows for the diamond (half): ");
    scanf("%d", &number);

    // Upper half of the diamond
    for (icout = 1; icout <= number; icout++) {
        // Print leading spaces
        for (space = 1; space <= number - icout; space++)
            printf(" ");

        // Print stars
        for (jcout = 1; jcout <= (2 * icout - 1); jcout++)
            printf("*");

        printf("\n");
    }

    // Lower half of the diamond
    for (icout = number - 1; icout >= 1; icout--) {
        // Print leading spaces
        for (space = 1; space <= number - icout; space++)
            printf(" ");

        // Print stars
        for (jcout = 1; jcout <= (2 * icout - 1); jcout++)
            printf("*");

        printf("\n");
    }

    return 0;
}
