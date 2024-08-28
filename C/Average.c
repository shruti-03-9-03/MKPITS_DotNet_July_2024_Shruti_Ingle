#include <stdio.h>

int main()
{
    int numbers[10];
    int sum = 0;
    float average;
    
    printf("Input the 10 numbers : ");
    
    for (int Cout=0;Cout<10;Cout++)
    {
        printf("Numbers-%d: ",Cout+1);
        scanf("%d",&numbers[Cout]);
        sum+=numbers[Cout];
    }
    
    average = sum /10;
    printf("The sum of 10 numbers is : %d\n",sum);
    printf("the Average is :%5f\n",average);
    
    return 0;
}