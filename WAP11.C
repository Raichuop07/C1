// This Program Is Developed By Danish Reyaz Mir
#include <stdio.h>
main()
{
    unsigned long long int a = 0, b = 1, next, n, i;
    printf("\t*****This Program Is Developed By Danish Reyaz Mir*****\n");
    printf("enter the number of terms:"); // Message to user
    scanf("%llu", &n);                    // taking  input from user
    for (i = 0; i < n; i++)
    {
        next = a + b;
        printf("%llu\n", next);
        a = b;
        b = next;
    }
}
