#include <stdio.h>

int main() {
    int start, numItems, commonDiff, sum = 0, term;

    // Input the starting number, number of terms, and common difference
    printf("Input the starting number of the A.P. series: ");
    scanf("%d", &start);
    
    printf("Input the number of items for the A.P. series: ");
    scanf("%d", &numItems);
    
    printf("Input the common difference of A.P. series: ");
    scanf("%d", &commonDiff);

    // Display the series and calculate the sum
    printf("The A.P. series is: ");
    for (int i = 0; i < numItems; i++) {
        term = start + i * commonDiff;
        sum += term;

        // Print the term and handle the '+' symbol properly
        if (i == numItems - 1) {
            printf("%d ", term);  // Last term, no plus sign
        } else {
            printf("%d + ", term);
        }
    }

    // Display the sum
    printf("= %d\n", sum);

    return 0;
}
