#include <stdio.h>

int main() {
int n=5;

for(int outercounter=1;outercounter<=n;outercounter++)
{
   
    for(int innercounter=1;innercounter<=outercounter;innercounter++)
    {
        printf("%d",outercounter);
    }
    printf("\n");
}
    return 0;
}
