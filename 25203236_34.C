//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");


    int year;
    printf("Enter the year:",year);
    scanf("%d",&year);
    if((year%400==0 && year%100==0)||(year%4==0))
    {
        printf("The year is leap year\n");
    }
    else
    {
        printf("The year is not leap year");
    }
    return 0;
}

