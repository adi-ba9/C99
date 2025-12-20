//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int number;
    printf("Enter the month number(1-12):",number);
    scanf("%d",&number);

    if(number==1)
    {
        printf("Month:January\n");
    }
    else if(number==3)
    {
        printf("Month:March\n");
    }
    else if(number==4)
    {
        printf("Month:April\n");
    }
    else if(number==5)
    {
        printf("Month:May\n");
    }
    else if(number==6)
    {
        printf("Month:June\n");
    }
    else if(number==7)
    {
        printf("Month:July\n");
    }
    else if(number==8)
    {
        printf("Month:August\n");
    }
    else if(number==9)
    {
        printf("Month:September\n");
    }
    else if(number==10)
    {
        printf("Month:October\n");
    }
    else if(number==11)
    {
        printf("Month:November\n");
    }
    else if(number==12)
    {
        printf("Month:December\n");
    }
    else
    {
        printf("Month:Invalid\n");
    }


    if(number==1 || number==3 || number==5 || number==7 || number==8 || number==10 || number==12)
    {
        printf("Days:31\n");
    }
    else if(number==2)
    {
        printf("Month:February\n");
        printf("Days:28 or Days:29");
    }
    else if(number==4 || number==6 || number==9 || number==11)
    {
        printf("Days:30\n");
    }
    else
    {
        printf("Days:Invalid");
    }
    //else
    //{
    //    printf("Days:30");
    //}
}


