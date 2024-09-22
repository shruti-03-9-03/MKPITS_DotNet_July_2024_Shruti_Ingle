#include <stdio.h>

int main() {
    char str[100];  // Array to hold the input string
    int length = 0;

    // Input a string
    printf("Input a string to reverse: ");
    fgets(str, sizeof(str), stdin);  // Read the string (including spaces)

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // If the string ends with a newline character, remove it
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;  // Adjust length
    }

    // Print the string in reverse order
    printf("Reversed string is: ");
    for (int iCout = length - 1; iCout >= 0; iCout--) {
        putchar(str[iCout]);  // Print each character from the end
    }
    printf("\n");

    return 0;
}
