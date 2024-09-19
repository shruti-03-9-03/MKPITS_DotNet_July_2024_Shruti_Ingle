#include <stdio.h>

// Function to display the Fibonacci series up to n terms
void displayFibonacci(int number) {
    int first = 0, second = 1, next;

    // Print the first two terms
    if (number >= 1) {
        printf("%d ", first);
    }
    if (number >= 2) {
        printf("%d ", second);
    }

    // Generate and print the remaining terms
    for (int i = 3; i <= number; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int numberOfTerms;

    // Input the number of terms to display
    printf("Input number of terms to display: ");
    scanf("%d", &numberOfTerms);

    // Display the Fibonacci series
    printf("Here is the Fibonacci series up to %d terms:\n", numberOfTerms);
    displayFibonacci(numberOfTerms);

    return 0;
}
