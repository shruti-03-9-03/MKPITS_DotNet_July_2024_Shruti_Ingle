#include <stdio.h>

int main() {
    int number, term = 1, sum = 0;

    
    printf("Enter the number of terms: ");
    scanf("%d", &number);

    
    printf(" The Required series: ");
    for (int Cout = 1; Cout <= number; Cout++) {
        printf("%d ", term);
        sum += term;
        term = term * 10 + 1; // Generate the next term by adding another '1'
        if (Cout != number) {
            printf("+ ");
        }
    }

   
    printf("\nThe Sum is: %d\n", sum);

    return 0;
}