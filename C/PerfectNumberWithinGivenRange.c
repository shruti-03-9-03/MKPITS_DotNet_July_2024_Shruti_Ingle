#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;

   
    for (int First = 1; First <= num / 2; First++) {
        if (num % First == 0) {
            sum += First;
        }
    }

    
    return sum == num;
}

int main() {
    int start, end;

   
    printf("Input the starting range or number: ");
    scanf("%d", &start);

    printf("Input the ending range of number: ");
    scanf("%d", &end);

  
    printf("The Perfect numbers within the given range: ");
    for (int Second = start; Second<= end; Second++) {
        if (isPerfect(Second)) {
            printf("%d ", Second);
        }
    }

    printf("\n");

    return 0;
}