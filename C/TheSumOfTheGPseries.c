#include <stdio.h>
#include <math.h>

int main() {
    double firstTerm, commonRatio, sum = 0.0;
    int numTerms;

    // Input the first number, number of terms, and common ratio
    printf("Input the first number of the G.P. series: ");
    scanf("%lf", &firstTerm);
    
    printf("Input the number of terms in the G.P. series: ");
    scanf("%d", &numTerms);
    
    printf("Input the common ratio of G.P. series: ");
    scanf("%lf", &commonRatio);

    // Display the G.P. series and calculate the sum
    printf("The numbers for the G.P. series:\n");
    for (int iCout = 0; iCout < numTerms; iCout++) {
        double term = firstTerm * pow(commonRatio,iCout);  // Calculate the term
        printf("%.6f ", term);  // Print the term
        sum += term;  // Add the term to the sum
    }

    // Output the sum
    printf("\nThe Sum of the G.P. series: %.6f\n", sum);

    return 0;
}
