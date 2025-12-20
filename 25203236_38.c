//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    float num1,num2,num3;
    printf("Enter the number1:",num1);
    scanf("%f",&num1);
    printf("Enter the number2:",num2);
    scanf("%f",&num2);
    printf("Enter the number3:",num3);
    scanf("%f",&num3);

    if((num1>num2)&&(num1>num3))
    {
        printf("Number1 is the maximum\n");
    }
    else if((num2>num1)&&(num2>num3))
    {
        printf("Number2 is the maximum\n");
    }
    else
    {
        printf("Number3 is the maximum");
    }

}
