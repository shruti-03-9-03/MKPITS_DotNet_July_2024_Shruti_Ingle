#include <stdio.h>
int main() {    

    int number1, number2, multi;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    multi = number1 * number2;      
    
    printf("%d*%d = %d", number1, number2, multi);
    return 0;
}