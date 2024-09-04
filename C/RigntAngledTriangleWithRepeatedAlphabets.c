#include <stdio.h>

int main() {
    
int n;
printf("Enter number : ");
scanf("%d",&n);
int outercounter;
for(outercounter=0;outercounter<=n;outercounter++)
{
    int innercounter=0;
    for(innercounter=0;innercounter<=outercounter;innercounter++)
    {
        char result = 'A'+innercounter;
        printf("%c \t",result);
        
    }
   
    printf("\n");
}

    

    return 0;
}
