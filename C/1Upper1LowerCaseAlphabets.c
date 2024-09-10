#include <stdio.h>
#include <ctype.h>  

int main() {
    char word[] = "Shruti";
    int Cout= 0;

    
    while (word[Cout] != '\0') 
    {
        if (Cout % 2 == 0) {
           
            printf("%c", toupper(word[Cout]));
        } else {
           
            printf("%c", tolower(word[Cout]));
        }
        Cout++;
    }

    printf("\n"); 
    return 0;
}