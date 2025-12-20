//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int number;
    printf("Enter the month number(1-12):",number);
    scanf("%d",&number);

    switch (number)
    {
        case 1: printf("Month:January\n");
                printf("Days:31");break;
        case 3: printf("Month:March\n");
                printf("Days:31");break;
        case 5: printf("Month:May\n");
                printf("Days:31");break;
        case 7: printf("Month:July\n");
                printf("Days:31");break;
        case 8: printf("Month:August\n");
                printf("Days:31");break;
        case 10:printf("Month:October\n");
                printf("Days:31");break;
        case 12:printf("Month:December\n");
                printf("Days:31");break;
        case 4: printf("Month:April\n");
                printf("Days:30");break;
        case 6: printf("Month:June\n");
                printf("Days:30");break;
        case 9: printf("Month:Sepetember\n");
                printf("Days:30");break;
        case 11:printf("Month:November\n");
                printf("Days:30");break;
        case 2: printf("Month:February\n");
                printf("Days:28 or 29");break;
        default:printf("Invalid Input");

    }
}
