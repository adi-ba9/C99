//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int number;
    printf("Enter the week number(1-7):",number);
    scanf("%d",&number);

    switch(number)
    {
        case 1:printf("Saturday\n");break;
        case 2:printf("Sunday\n");break;
        case 3:printf("Monday\n");break;
        case 4:printf("Tuesday\n");break;
        case 5:printf("Wednesday\n");break;
        case 6:printf("Thursday\n");break;
        case 7:printf("Friday\n");break;
        default:printf("Invalid input");
    }
}


