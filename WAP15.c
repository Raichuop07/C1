// This Program Is Developed By Satyam
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3];
    int i, j;
    printf("enter the value of  matrix\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("value of matrix\n");
      for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

    //transpose of matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[j][i]=a[i][j];
        
        }
    }
    printf("transpose of a matrix is\n ");
      for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {
            printf("\t%d",b[j][i]);

        }
        printf("\n");
    }
    return 0;

}
