#include <stdio.h>

int main() {
    int number,Cout;
    unsigned long long factorial = 1;

    printf("Input the number: ");
    scanf("%d", &number);

    
    if (number < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else{
       
        for (Cout = 1; Cout<= number; ++Cout) {
            factorial *= Cout;
        }
        printf("The Factorial of %d is: %llu\n", number, factorial);
    }

    return 0;
}