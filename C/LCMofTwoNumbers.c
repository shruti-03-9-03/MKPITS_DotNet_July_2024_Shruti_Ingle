#include <stdio.h>

int main() {
    int num1, num2, max, lcm;

    // Input two numbers
    printf("Input 1st number for LCM: ");
    scanf("%d", &num1);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &num2);

    // Initialize the maximum value between num1 and num2
    max = (num1 > num2) ? num1 : num2;

    // Find the LCM by incrementing max until it is divisible by both numbers
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    // Output the LCM
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}
