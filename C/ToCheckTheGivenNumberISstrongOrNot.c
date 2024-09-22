#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, remainder, sum = 0;

    // Input the number to check
    printf("Input a number to check whether it is Strong number: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate the sum of the factorial of each digit
    while (num > 0) {
        remainder = num % 10; // Get the last digit
        sum += factorial(remainder); // Add factorial of the digit to sum
        num /= 10; // Remove the last digit
    }

    // Check if sum of factorials equals the original number
    if (sum == originalNum) {
        printf("%d is a Strong number.\n", originalNum);
    } else {
        printf("%d is not a Strong number.\n", originalNum);
    }

    return 0;
}
