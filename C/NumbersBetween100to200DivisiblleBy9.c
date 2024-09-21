#include <stdio.h>

int main() {
    int icout, sum = 0;

    printf("Numbers between 100 and 200, divisible by 9:\n");

    // Loop through numbers between 100 and 200
    for (icout = 100; icout <= 200; icout++) {
        if (icout % 9 == 0) {
            printf("%d ", icout);
            sum += icout;  // Add the number to the sum
        }
    }

    // Print the sum
    printf("\nThe sum: %d\n", sum);

    return 0;
}