#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;  // 0 and 1 are not prime
    for (int iCout = 2; iCout * iCout <= num; iCout++) {
        if (num % iCout == 0) return false;  // Found a divisor
    }
    return true;
}

int main() {
    int number;

    // Input a positive integer
    printf("Input a positive integer: ");
    scanf("%d", &number);

    // Check for sums of two primes
    printf("Possible representations of %d as the sum of two primes:\n", number);
    for (int iCout = 2; iCout <= number / 2; iCout++) {
        int complement = number - iCout;
        if (isPrime(iCout) && isPrime(complement)) {
            printf("%d = %d + %d\n", number, iCout, complement);
        }
    }

    return 0;
}
