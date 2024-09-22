#include <stdio.h>

int main() {
    char str[100];  // Array to hold the input string
    int length = 0;

    // Input a string
    printf("Input a string: ");
    fgets(str, sizeof(str), stdin);  // Read the string (including spaces)

    // Calculate the length of the string manually
    while (str[length] != '\0') {
        if (str[length] == '\n') {
            break;  // Stop counting if a newline character is found
        }
        length++;
    }

    // Output the length of the string
    printf("The string contains %d number of characters.\n", length);
    printf("So, the length of the string %s is: %d\n", str, length);

    return 0;
}
