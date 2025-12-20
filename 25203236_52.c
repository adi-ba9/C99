//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    float temp;
    printf("Enter the Temperature in centigrade:",temp);
    scanf("%f",&temp);

    if(temp<0)
    {
        printf("Frizing weather\n");
    }
    else if(temp>=0 && temp<10)
    {
        printf("Very cold weather\n");
    }
    else if(temp>=10 && temp<20)
    {
        printf("Cold weather\n");
    }
    else if(temp>=20 && temp<30)
    {
        printf("Normal\n");
    }
    else if(temp>=30 && temp<40)
    {
        printf("It's hot\n");
    }

    else
    {
        printf("It's very hot");
    }
}
