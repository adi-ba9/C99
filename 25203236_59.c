//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    float num1,num2;
    printf("Enter Number1:",num1);
    scanf("%f",&num1);

    printf("Enter Number2:",num2);
    scanf("%f",&num2);

    switch(num1>num2)
    {
       case 1 :printf("Number1 is the Maximum");break;
       case 0 :printf("Number2 is the Maximum");break;
       default:printf("Invalid");
    }
}
