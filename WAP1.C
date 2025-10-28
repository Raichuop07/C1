// This Program Is Developed By Danish Reyaz Mir
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter two numbers\n");
    scanf("%d%d", &a, &b); // taking values from the user
    // addition of two numbers
    c = a + b;
    printf("\nsum of two numbers=%d", c);
    // subtraction of two number
    c = a - b;
    printf("\nsubtraction of two numbers=%d", c);
    // multiplication of two numbers
    c = a * b;
    printf("\nmultiplication of two numbers=%d", c);
    // division of two numbers
    c = a / b;
    printf("\ndivision of two number=%d", c);
    return 0;
}
