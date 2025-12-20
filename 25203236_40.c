//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int number;
    printf("Enter the week number(1-7):",number);
    scanf("%d",&number);

    if(number==1)
    {
        printf("Saturday\n");
    }
    else if(number==2)
    {
        printf("Sunday\n");
    }
    else if(number==3)
    {
        printf("Monday\n");
    }
    else if(number==4)
    {
        printf("Tuesday\n");
    }
    else if(number==5)
    {
        printf("Wednesday\n");
    }
    else if(number==6)
    {
        printf("Thursday\n");
    }
    else
    {
        printf("Friday\n");
    }
}

