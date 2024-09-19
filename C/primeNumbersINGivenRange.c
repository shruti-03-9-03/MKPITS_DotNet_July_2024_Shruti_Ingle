#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    if (num <= 3) {
        return true; // 2 and 3 are prime numbers
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Numbers divisible by 2 or 3 are not prime
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false; // Check divisibility by numbers of the form 6k ± 1
        }
    }
    return true;
}

int main() {
    int start, end;

    // Input starting and ending numbers of the range
    printf("Input starting number of range: ");
    scanf("%d", &start);

    printf("Input ending number of range: ");
    scanf("%d", &end);

    printf("The prime numbers between %d and %d are:\n", start, end);

    // Find and display prime numbers in the given range
    for (int iCout = start; iCout <= end; iCout++) {
        if (isPrime(iCout)) {
            printf("%d ", iCout);
        }
    }

    printf("\n");

    return 0;
}