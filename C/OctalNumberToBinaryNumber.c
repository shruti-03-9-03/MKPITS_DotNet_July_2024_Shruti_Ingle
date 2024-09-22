#include <stdio.h>
#include <math.h>

void octalToBinary(int octal) {
    int decimal = 0, binary = 0, remainder, position = 1;

    // Convert octal to decimal
    while (octal > 0) {
        remainder = octal % 10;  // Get the last digit
        decimal += remainder * pow(8, position - 1);  // Convert to decimal
        octal /= 10;  // Remove the last digit
        position++;  // Move to the next position
    }

    // Convert decimal to binary
    position = 1;  // Reset position for binary conversion
    while (decimal > 0) {
        remainder = decimal % 2;  // Get the last binary digit
        binary += remainder * position;  // Build the binary number
        decimal /= 2;  // Remove the last digit
        position *= 10;  // Move to the next place value in binary
    }

    // Output the result
    printf("The equivalent Binary Number: %d\n", binary);
}

int main() {
    int octal;

    // Input the octal number
    printf("Input an octal number (using digit 0 - 7): ");
    scanf("%d", &octal);

    // Output the original octal number
    printf("The Octal Number: %d\n", octal);

    // Convert and display the binary number
    octalToBinary(octal);

    return 0;
}
