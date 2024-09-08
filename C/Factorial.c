#include <stdio.h>

int main() {
    int num, Cout;
    unsigned long long factorial = 1;

    
    printf("Input the number : ");
    scanf("%d", &num);

   
    if (num < 0)
        printf("Factorial of a negative number doesn't exist.\n");
    else {
        for(Cout = 1; Cout <= num; ++Cout) {
            factorial *= Cout;
        }
        printf("The Factorial of %d is: %llu\n", num, factorial);
    }

    return 0;}