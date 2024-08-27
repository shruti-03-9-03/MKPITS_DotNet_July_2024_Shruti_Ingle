#include <stdio.h>

int main() {
    int height;

   
    printf("Enter the height of the person in centimeters: ");
    scanf("%d", &height);

   
    if (height < 140)
    {
        printf("The person is Dwarf.\n");
    } 
    else if (height >= 140 && height <= 170)
    {
        printf("The person is of average height.\n");
    }
    else
    {
        printf("The person is tall.\n");
    }

    return 0;
}