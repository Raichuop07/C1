#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;
    printf("enter the values of first matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the values of 2nd matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("values of first matrix\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    printf("values of 2nd matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }
    // addition of two matrix
    printf("sum of two matrices\n");
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
   /* printf("sum of two matrices\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }*/
    // subtraction of two matrix
    printf("subtraction of two matrices\n");
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
    /*printf("subtraction of two matrices\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }*/
    return 0;
}