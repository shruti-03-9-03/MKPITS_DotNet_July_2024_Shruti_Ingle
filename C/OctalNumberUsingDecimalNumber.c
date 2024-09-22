#include <stdio.h>
#include <math.h>

int main() {
    int octal, decimal = 0, remainder, position = 0;

    // Input the octal number
    printf("Input an octal number (using digit 0 - 7): ");
    scanf("%d", &octal);

    int num = octal;  // Store the original octal number for printing later

    // Convert octal to decimal
    while (octal != 0) {
        remainder = octal % 10;  // Extract the last digit of the octal number
        decimal += remainder * pow(8, position);  // Multiply by powers of 8
        octal /= 10;  // Remove the last digit
        position++;  // Increase the position to handle the next power of 8
    }

    // Output the result
    printf("The Octal Number: %d\n", num);
    printf("The equivalent Decimal Number: %d\n", decimal);

    return 0;
}
