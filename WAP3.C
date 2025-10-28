// This Program Is Developed By Danish Reyaz Mir
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, d;
    printf("enter two number:\n");
    scanf("%d%d", &a, &b); // taking values from the user
    // post increment
    c = a++;
    printf("\nbefore increment value of 'a' is %d", c);
    // pre increment
    c = ++a;
    printf("\nafter increment value of 'a' is %d", c);
    // post decrement
    d = b--;
    printf("\nbefore decrement value of 'b'is %d", d);
    // pre decrement
    d = --b;
    printf("\nafter decrement value of 'b' is %d", d);
    return 0;
}
