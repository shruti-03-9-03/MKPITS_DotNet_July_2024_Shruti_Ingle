#include <stdio.h>

int main()
{
int sum=0;

printf("The first 10 natural numbers are :\n");

for (int cout=1;cout<=10;cout++)
{
    printf("%d",cout);
    sum+=cout;
}

printf("the sum is :\n",sum);
return 0;


}