#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    // Input the binary number
    printf("Input a binary number: ");
    scanf("%lld", &binary);

    // Process each binary digit (from right to left)
    for (int i = 0; i < 64; i++) {
        remainder = binary % 10;
        binary = binary / 10;
        decimal += remainder * base;
        base = base * 2;
        
        // End the loop when binary number becomes 0
        if (binary == 0) {
            break;
        }
    }

    // Print the result
    printf("The equivalent Decimal Number: %d\n", decimal);

    return 0;
}
