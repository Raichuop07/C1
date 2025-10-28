// This Program is Developed By Danish Reyaz Mir
#include <stdio.h>
main()
{
    float a, b, c;
    char operation;
    printf("This Mini Calculator Perform Addition,Subtraction,Multiplication,Division");
    printf("\nEnter Two Numbers\n");
    scanf("%f%f", &a, &b);
    printf("Enter Operation to perform\n");
    scanf("%s", &operation);
    // Using If else statement
    if (operation == '+')
    {
        c = a + b;
        printf("Addition Of Two Numbers =%f", c);
    }
    else if (operation == '-')
    {
        c = a - b;
        printf("Subtration Of Two Numbers=%f", c);
    }
    else if (operation == '*')
    {
        c = a * b;
        printf("Multiplication Of Two Numbers=%f", c);
    }
    else if (operation == '/')
    {
        c = a / b;
        printf("Division Of Two Numbers=%f", c);
    }
    else
    {
        printf("Enter Valid Input");
    }
}
