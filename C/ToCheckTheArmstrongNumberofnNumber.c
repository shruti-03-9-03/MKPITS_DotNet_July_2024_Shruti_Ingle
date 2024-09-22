#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    // Input an integer
    printf("Input an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Calculate the number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;  // Reset originalNum for further calculations

    // Calculate the sum of the nth powers of its digits
    while (originalNum != 0) {
        remainder = originalNum % 10;  // Get the last digit
        result += pow(remainder, n);    // Add the nth power of the digit to the result
        originalNum /= 10;               // Remove the last digit
    }

    // Check if the original number is equal to the result
    if (result == num) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}
