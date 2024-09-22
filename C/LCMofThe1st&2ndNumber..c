#include <stdio.h>

// Function to calculate HCF using Euclidean algorithm
int findHCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, hcf, lcm;

    // Input two numbers
    printf("Input 1st number for LCM: ");
    scanf("%d", &num1);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &num2);

    // Find HCF
    hcf = findHCF(num1, num2);

    // Calculate LCM using the relation: LCM(a, b) = (a * b) / HCF(a, b)
    lcm = (num1 * num2) / hcf;

    // Output the LCM
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
