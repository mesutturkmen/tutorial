#include<stdio.h>
int main()
{
    int number;
    int a, i, j;
    printf("Enter number of rows: ");
    scanf("%d",&number);
        for(i = 0; i <= number; i++)
        {
            for(a = number; a > i; a--)
            printf(" ");
            for(j=0; j<i; j++)
            printf("* ");
            printf("\n");
            }
        for(i = 1; i < number; i++)
        {
        for(a = 0; a < i; a++)
        printf(" ");
        for(j = number; j > i; j--)
        printf("* ");
        // ending line
        printf("\n");
    }
    return 0;
}