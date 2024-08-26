#include <stdio.h>

int main() {
    int number;

        printf("Enter an integer: ");
    scanf("%d", &number);

        if (number> 0) {
        printf("%d is the positive number\n", number);
    } else {
        printf("%d is the negative number\n", number);
    }

    return 0;
}