#include <stdio.h>

int main() {
    int number, sum = 0;

    
    printf("Input the number of terms: ");
    scanf("%d", &number);

    printf("The square natural numbers up to %d terms are: ",number);

    
    for (int Cout = 1; Cout <= number; Cout++) 
    {
        int square = Cout * Cout; 
        printf("%d ", square); 
        sum += square; 
    }

    
    printf("\nThe Sum of Square Natural Numbers up to %d terms = %d\n", number, sum);

    return 0;
}