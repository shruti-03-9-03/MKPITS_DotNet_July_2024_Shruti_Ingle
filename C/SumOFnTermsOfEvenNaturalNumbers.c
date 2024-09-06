#include <stdio.h>

int main() {
    int cout, number, sum = 0;

   
    printf("Input number of terms: ");
    scanf("%d", &number);

    printf("The even numbers are: ");
    
    
    for( cout = 1;  cout <= number;  cout++) {
        printf("%d ", 2 *  cout);
        sum += 2 *  cout;
    }

   
    printf("\nThe Sum of even Natural Number upto %d terms: %d\n", number, sum);

    return 0;
}