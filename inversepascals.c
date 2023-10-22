#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i ,j ,s ,c;
printf("how many rows you want to print the inverse pascals series ");
scanf("%d", &n);
for (i = 0 ; i<n ; i++)
{
    for(s= 0; s<i; s++)
    {
        printf(" ");

    }
    for (j= 0 ; j<(n-i) ; j++)
    {
        if (j==0)
        c = 1;
        else
        c = c*(n-i-j)/j;
        printf("%4d", c);

    }
    printf("\n");
}

}