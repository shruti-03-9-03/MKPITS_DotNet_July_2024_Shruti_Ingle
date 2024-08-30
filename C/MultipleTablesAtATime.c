#include <stdio.h>

int main() {
    int number;

   
    printf("Input up to the table number starting from 1: ");
    scanf("%d", &number);

    printf("Multiplication table from 1 to %d\n", number);

   
    for (int Ocout = 1; Ocout <= 10; Ocout++) {
        
        for (int Icout = 1; Icout <= number; Icout++) {
          
            printf("%d x %d = %d", Icout, Ocout, Icout * Ocout);
            if (Icout < number) {
                printf(", ");  
            }
        }
        printf("\n"); 
    }

    return 0;
}