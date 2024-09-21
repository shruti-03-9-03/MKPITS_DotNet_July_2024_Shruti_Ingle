#include <stdio.h>

void printBinary(unsigned int num) {
    unsigned int mask = 1 << 31;  // Start with the leftmost bit (31st bit for a 32-bit integer)

    for (int iCout = 0; iCout < 32; iCout++) {
        // Print the current bit (0 or 1)
        if (num & mask) {
            printf("1");
        } else {
            printf("0");
        }

        // Move the mask one bit to the right
        mask >>= 1;

        // Add a space after every 4 bits for readability
        if ((iCout + 1) % 4 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    unsigned int num;

    // Input a decimal number
    printf("Input a decimal number: ");
    scanf("%u", &num);

    // Convert and display the binary representation
    printf("Binary number equivalent to said decimal number is: ");
    printBinary(num);

    return 0;
}
