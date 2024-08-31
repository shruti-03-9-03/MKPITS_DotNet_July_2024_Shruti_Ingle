#include <stdio.h>

int main() {
    int number, sum = 0;

   
    printf("Input number of terms: ");
    scanf("%d", &number);

    printf("The odd numbers are: ");

   
    for(int Cout = 1; Cout <= number; Cout++) 
    {
        int odd_number = 2 * Cout - 1;
        printf("%d ", odd_number);
        sum += odd_number; 
    }

    printf("\nThe Sum of odd Natural Number upto %d terms: %d\n", number, sum);

    return 0;
}