// This Program Is Developed By Danish Reyaz Mir
#include <stdio.h>
#include <conio.h>
int main()
{
    int day; // declaration of variable
    printf("\nenter the number between 1 to 7\n");
    scanf("%d", &day); // taking value from the user
    // using  switch statement
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid Day Number");
        return 0;
    }
}
