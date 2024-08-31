#include <stdio.h>

int main() {
int n=5;
int outercounter;
for(outercounter=1;outercounter<=n;outercounter++)
{
    int innercounter;
    for(innercounter=1;innercounter<=outercounter;innercounter++)
    {
        printf("%d",innercounter);
    }
    printf("\n");
}

    

    return 0;
}
