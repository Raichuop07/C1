// This Program Is Developed By Satyam
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;  //declaration of three variables
    printf("enter three number:\n");
    scanf("%d%d%d", &a, &b, &c); // taking values
    // Aplying Operations
    if (a >= b && a >= c)
    {
        printf("Greatest Number Is %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Greatest Number Is %d", b);
    }
    else
    {
        printf("Greatest Number Is %d", c);
    }
    return 0;

}
