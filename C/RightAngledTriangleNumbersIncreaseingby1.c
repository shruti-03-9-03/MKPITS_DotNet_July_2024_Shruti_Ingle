#include <stdio.h>
int main() 
{    
int n;
printf("Enter number of rows : ");
scanf("%d",&n);
int result=1;
for(int ocounter=1;ocounter<=n;ocounter++)
{
    for(int icounter=1;icounter<=ocounter;icounter++)
    {
        printf("%d",result++);
    }
   
    printf("\n");
}
    return 0;
}