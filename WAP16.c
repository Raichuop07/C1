#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);

int main()
{
    int num1, num2, sum;

    // Taking input
    printf("Enter two numbers:\n ");
    scanf("%d %d", &num1, &num2);

    // Function call
    sum = add(num1, num2);

    // Displaying result
    printf("Sum = %d\n", sum);

    return 0;
}

// Function definition
int add(int a, int b)
{
    return a + b; // Returning result
}