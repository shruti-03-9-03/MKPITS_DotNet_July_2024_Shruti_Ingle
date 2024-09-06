#include <stdio.h>

int main() {
    int i, j, rows, space, stars;

    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

  
    for(i = 1; i <= rows; i++) {
       
        space = rows - i;

       
        for(j = 1; j <= space; j++) {
            printf(" ");
        }

      
        stars = 2 * i - 1;

       
        for(j = 1; j <= stars; j++) {
            printf("*");
        }

      
        printf("\n");
    }

    return 0;
}