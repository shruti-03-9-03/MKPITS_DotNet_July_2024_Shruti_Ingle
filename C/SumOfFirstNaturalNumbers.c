#include <stdio.h>

int main()
{
    int number, sum=0;
    
    printf("Input numbers of terms : ");
    scanf("%d",&number);
    
    printf("The first %d natural numbers are : \n",number);
    
    for(int Counter =1;Counter<=number;Counter++)
    {
        printf("%d",Counter);
       sum +=Counter;
    }
    printf("The sum of Natural Numbers up to %d terms : %d\n",number,sum);
    return 0;
    
}