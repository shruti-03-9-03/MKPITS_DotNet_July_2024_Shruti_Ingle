#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num) {
    int sum = 0;

    // Find divisors and sum them up
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Return true if sum of divisors equals the number
    return sum == num;
}

int main() {
    int start, end;

    // Input the range
    printf("Input the starting range or number: ");
    scanf("%d", &start);
    printf("Input the ending range of number: ");
    scanf("%d", &end);

    printf("The Perfect numbers within the given range: ");
    
    // Loop through the range and check for perfect numbers
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
