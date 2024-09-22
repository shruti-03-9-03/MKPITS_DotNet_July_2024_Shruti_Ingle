#include <stdio.h>

int main() {
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=20;col++)
        {
            //row1
            
                if((col==1 || col==5 || col==7 || col==10 || col==12|| col==13 || col==14 || col==16 || col==18 || col==19 || col==20) && (row==1))
                {
                   printf("*\t");
                }
                else if((col==1 || col==2 || col==4 || col==5 || col==7 || col==9 || col==12 || col==14 || col==16|| col==19)&& (row==2))
                {
                  printf("*\t");
                }
                else if((col==1 || col==3 || col==5 || col==7 || col==8 || col==12 || col==13 || col==14 ||col==16|| col==19) && (row==3))
                {
                    printf("*\t");
                }
                else if((col==1 || col==5 || col==7 || col==9 || col==12 || col==16|| col==19) && (row==4))
                {
                printf("*\t");
                }
                else if((col==1||col==5 || col==7 || col==10 || col==12 ||col==16|| col==19) && (row==5))
                {
                 printf("*\t");
                }
                else
                 {
                   printf(" \t");
                 }
        }
        printf("\n");
    }
            
    return 0;
