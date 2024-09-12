#include <stdio.h>

int main() {
    int num, sum = 0;

   
    printf("Input the number: ");
    scanf("%d", &num);

   
    printf("The positive divisors: ");
    for (int Cout = 1; Cout <= num / 2; Cout++) {
        if (num % Cout == 0) {
            printf("%d ", Cout);
            sum += Cout; 
        }
    }

    
    printf("\nThe sum of the divisors is: %d\n", sum);

    
    if (sum == num) {
        printf("So, the number is perfect.\n");
    } else {
        printf("So, the number is not perfect.\n");
    }

    return 0;
}