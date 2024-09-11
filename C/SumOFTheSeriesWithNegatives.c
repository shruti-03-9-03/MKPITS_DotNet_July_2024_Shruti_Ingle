#include <stdio.h>
#include <math.h>

int main() {
    int Number, Terms;
    int exponent = 1;     // Initial exponent for the series
    int sign = 1;         // This will help alternate between positive and negative terms
    int term;
    int sum = 0;

    // Input values for Number and number of terms (n)
    printf("Input the value of Number: ");
    scanf("%d", &Number);
    
    printf("Input number of terms: ");
    scanf("%d", &Terms);

    printf("The values of the series:\n");

    // Loop to calculate each term and add it to the sum
    for (int Cout = 1;Cout<= Terms; Cout++) {
        // Calculate the current term in the series: x^exponent
        term = sign * pow(Number, exponent);

        // Print the current term
        printf("%d\n", term);

        // Add the current term to the sum
        sum += term;

        // Alternate the sign for the next term
        sign *= -1;

        // Increment the exponent by 2 for the next term (x^1, x^3, x^5, ...)
        exponent += 2;
    }

    // Output the total sum of the series
    printf("The sum = %d\n", sum);

    return 0;
}