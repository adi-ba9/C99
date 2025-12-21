// Name: Adiba Tasnim, ID No: 25203236, Serial: 19
#include <stdio.h>

int main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial: 19\n\n");

    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("The year is a leap year\n");
    }
    else
    {
        printf("The year is not a leap year\n");
    }

    return 0;
}

