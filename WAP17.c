// This Program Is Developed By Satyam
#include <stdio.h>

int main()
{
    int num = 10; // Normal integer variable
    int *ptr;     // Pointer declaration

    ptr = &num; // Store the address of num in pointer

    printf("Value of num       : %d\n", num);
    printf("Address of num     : %p\n", &num);
    printf("Pointer ptr holds  : %p\n", ptr);
    printf("Value at *ptr      : %d\n", *ptr);

    // Changing value using pointer
    *ptr = 20;

    printf("\nAfter modifying value using pointer:\n");
    printf("Value of num       : %d\n", num);
    printf("Value at *ptr      : %d\n", *ptr);

    return 0;
}

