// This Program Is Developed By Danish Reyaz Mir
#include <stdio.h>
main()
{
    unsigned long long int num, i, result; // declaration of variables
    result = 1;
    printf("\t*****This Program Is Developed By Danish Reyaz Mir*****\n");
    printf("enter a number\n");
    scanf("%llu", &num); // taking input from the user
    // using if else
    if (num == 0)
    {
        printf("factorial of zero is 1");
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            result *= i;
        }
        printf("factorial of %llu is %llu", num, result);
    }
}
