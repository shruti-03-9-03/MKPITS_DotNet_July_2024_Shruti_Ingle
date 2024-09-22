#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is a Strong Number
int isStrongNumber(int num) {
    int originalNum = num, remainder, sum = 0;

    while (num > 0) {
        remainder = num % 10;
        sum += factorial(remainder);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int start, end;

    // Input the range
    printf("Input starting range of number: ");
    scanf("%d", &start);
    printf("Input ending range of number: ");
    scanf("%d", &end);

    // Find and print Strong Numbers within the range
    printf("The Strong numbers are:\n");
    for (int i = start; i <= end; i++) {
        if (isStrongNumber(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
