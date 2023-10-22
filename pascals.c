#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j ,space, value;
    printf("how many rows you want to print in pascals triangle ");
    scanf("%d", &i);
    for (i = 1; i<=10 ;i++)
    {
        for(space = 1; space<= (10-i); space++)
        {
            printf("  ");
        }
        for(j = 1;j<=i;j++)
        {
            if (i == 1||j== 1)

            {
              value = 1  ;
            }
           else
           {
            value = value*(i-j+1)/(j-1);
           } 
           printf("%4d", value);
        }
        printf("\n");
    }
}