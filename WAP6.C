// This Program Is Developed By Danish Reyaz Mir
#include <stdio.h>
int main()
{
    char lowerchar, upperchar; // declaration of two variables
    printf("enter the lowercase alphabet ");
    scanf("%c", &lowerchar); // taking lowercase alphabet from the user
    if (lowerchar >= 'a' && lowerchar <= 'z')
    {
        upperchar = lowerchar - 32;
        printf("the required uppercase result is %c", upperchar);
    }
    else
    {
        printf("enter the valid lowercase alphabet");
    }
    return 0;
}