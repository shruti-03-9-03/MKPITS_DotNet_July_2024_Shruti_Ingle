#include <stdio.h>

int main() {
    int number, reverse = 0;

    // Input a number
    printf("Input a number: ");
    scanf("%d", &number);

    // Process to reverse the number
    while (number != 0) {
        int digit = number % 10;     // Get the last digit
        reverse = reverse * 10 + digit; // Build the reversed number
        number /= 10;               // Remove the last digit
    }

    // Output the reversed number
    printf("The number in reverse order is: %d\n", reverse);

    return 0;
}
