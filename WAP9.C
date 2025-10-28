// This Program Is Developed by Danish Reyaz Mir
#include <stdio.h>
main()
{
    int a, i; // Declaration of variables
    printf("enter the number\n");
    scanf("%d", &a); // Taking values from the user
    i = 1;
    do
    {
        printf("%d x %d=%d\n", a, i, a * i);
        i++;
    } while (i <= 10);
}
