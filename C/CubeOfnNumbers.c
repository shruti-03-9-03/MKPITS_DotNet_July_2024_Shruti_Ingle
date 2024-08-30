#include <stdio.h>

int main() {
    
    int numberOfTerms;

    
    printf("Input number of terms: ");
    scanf("%d", &numberOfTerms);

   
    for (int Cout = 1; Cout <= numberOfTerms; Cout++) {
      
        int cube = Cout * Cout * Cout;
       
        printf("Number is: %d and cube of the %d is: %d\n", Cout, Cout, cube);
    }

    return 0;
}