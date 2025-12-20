//Name: Adiba Tasnim, ID NO: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID NO: 25203236, Serial:19\n\n");

    float num1,num2,div;

    printf("Enter the number1:",num1);
    scanf("%f",&num1);

    printf("Enter the number2:",num2);
    scanf("%f",&num2);

    div=num1/num2;

    if (num2!=0)
    {
        printf("Result=%f\n",div);
    }

    if(num2==0)
    {
        printf("Error!");
    }
}


