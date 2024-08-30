#include <stdio.h>

int main() {
    int number;

    
    printf("Table to be calculated: ");
    scanf("%d", &number);

   
    for (int Cout = 1; Cout <= 10; Cout++) {
       
        printf("%d X %d = %d\n", number, Cout, number * Cout);
    }

    return 0;
}