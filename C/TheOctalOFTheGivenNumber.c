#include <stdio.h>

int main() {
    int decimal, octal = 0, place = 1, remainder;

    // Input the decimal number
    printf("Enter a number to convert: ");
    scanf("%d", &decimal);

    int num = decimal;  // Store the original number for printing later

    // Convert decimal to octal
    while (decimal > 0) {
        remainder = decimal % 8;  // Get the remainder when divided by 8
        octal += remainder * place;  // Build the octal number
        decimal /= 8;  // Update the decimal number by dividing by 8
        place *= 10;  // Move to the next place value in the octal number
    }

    // Output the result
    printf("The Octal of %d is %d.\n", num, octal);

    return 0;
}
