#include <stdio.h>

int main() {
    int Cout, Cin, rows;

   
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    
    for(Cout= 1; Cout <= rows; Cout++) {
       
        for(Cin = 1; Cin <= rows - Cout; Cin++) {
            printf(" ");
        }
        
       
        for(Cin = 1; Cin <= Cout; Cin++) {
            printf("%d ", Cout);
        }

      
        printf("\n");
    }

    return 0;
}