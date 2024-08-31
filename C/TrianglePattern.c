#include <stdio.h>

int main() {
    int OCout, ICout, rows;

   
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

   
    for (OCout = 1; OCout <= rows; OCout++) {
       
        for (ICout = 1; ICout <= OCout; ICout++)
        {
            printf("*");
        }
       
        printf("\n");
    }

    return 0;
}