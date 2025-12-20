//Name: Adiba Tasnim, ID NO: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID NO: 25203236, Serial:19\n\n");
    float num,square;

    printf("Enter the number:",num);
    scanf("%f",&num);

    square=num*num;

    if (num<10)
    {
        printf("Result=%f",square);
    }

    if(num>10)
    {
        printf("Result won't be printed");
    }

}
