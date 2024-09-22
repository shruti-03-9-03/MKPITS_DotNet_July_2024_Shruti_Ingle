#include <stdio.h>

int main() {
    int num1, num2, hcf;

    // Input two numbers
    printf("Input 1st number for HCF: ");
    scanf("%d", &num1);
    printf("Input 2nd number for HCF: ");
    scanf("%d", &num2);

    // Apply Euclidean algorithm to find HCF
    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    // Output the HCF
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
