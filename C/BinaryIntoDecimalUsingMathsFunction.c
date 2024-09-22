#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, remainder, position = 0;

    // Input the binary number
    printf("Input the binary number: ");
    scanf("%lld", &binary);

    // Process each digit from right to left
    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, position);
        binary /= 10;
        position++;
    }

    // Output the results
    printf("The Binary Number: %lld\n", binary);
    printf("The equivalent Decimal Number is: %d\n", decimal);

    return 0;
}
