#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, octal = 0, remainder, position = 0;

    // Input the binary number
    printf("Input a binary number: ");
    scanf("%lld", &binary);

    // Convert binary to decimal
    long long temp = binary;  // Store the original binary number for later use
    while (binary > 0) {
        remainder = binary % 10;  // Get the last digit
        decimal += remainder * pow(2, position);  // Calculate the decimal equivalent
        binary /= 10;  // Remove the last digit
        position++;  // Move to the next position
    }

    // Convert decimal to octal
    position = 1;  // Reset position for octal conversion
    while (decimal > 0) {
        remainder = decimal % 8;  // Get the last digit of the decimal number
        octal += remainder * position;  // Build the octal number
        decimal /= 8;  // Remove the last digit
        position *= 10;  // Move to the next place value in octal
    }

    // Output the results
    printf("The Binary Number: %lld\n", temp);
    printf("The equivalent Octal Number: %d\n", octal);

    return 0;
}
