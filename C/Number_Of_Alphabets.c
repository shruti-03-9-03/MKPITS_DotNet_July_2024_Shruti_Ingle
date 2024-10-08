#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i, count = 0;

    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is an alphabet
        if (isalpha(str[i])) {
            count++;
        }
    }

    // Output the result
    printf("Number of alphabets in the string: %d\n", count);

    return 0;
}
