#include <stdio.h>
int main() {    

    int number1, number2, div;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    div = number1 / number2;      
    
    printf("%d/%d = %d", number1, number2,div);
    return 0;
}