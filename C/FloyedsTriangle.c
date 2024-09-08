#include <stdio.h>

int main() {
    int rows, value;

  
    printf("Input number of rows: ");
    scanf("%d", &rows);

   
    for (int Cout = 1; Cout <= rows; Cout++) {
        value = Cout % 2;  
        
        for (int Cin = 1; Cin <= Cout; Cin++) {
            printf("%d", value);
            value = 1 - value; 
        }
        
        printf("\n"); 
    }

    return 0;
}