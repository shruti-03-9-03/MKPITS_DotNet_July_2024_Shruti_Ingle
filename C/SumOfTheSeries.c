#include <stdio.h>
#include <math.h>  // For pow()

int main() {
    float Fnum, sum = 0.0;
    int num1, num2;

    printf("Input the value of Fnum: ");
    scanf("%f", &Fnum);
    printf("Input number of terms: ");
    scanf("%d", &num1);

    // Loop to calculate the sum of the series
    for (num2 = 1; num2 <= num1; num2++) 
    {
        int exponent = 2 * num2 - 1;  // Calculate the odd exponent (1, 3, 5,...)
        float term = pow(Fnum, exponent);  // Calculate Fnum raised to that exponent
        
        if (num2 % 2 == 0) {
            sum -= term;  // Subtract if the term index is even
        } else {
            sum += term;  // Add if the term index is odd
        }
    }

    // Output the result
    printf("The sum is: %f\n", sum);

    return 0;
}