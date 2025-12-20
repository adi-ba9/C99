//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    float num1,num2;

    printf("Enter the number1:",num1);
    scanf("%f",&num1);

    printf("Enter the number2:",num2);
    scanf("%f",&num2);

    if (num1==num2)
    {
        printf("equal\n");
    }

    if(num1>num2)
    {
        printf("Greater\n");
    }

    if(num1<num2)
    {
        printf("Smaller");
    }
}
