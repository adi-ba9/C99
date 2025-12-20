//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    float num;
    printf("Enter the Number:",num);
    scanf("%f",&num);

    switch(num>0)
    {
        case 1 :printf("The number is positive");break;
        case 0 :
            switch (num<0)
            {
              case 1:printf("The number is negative");break;
              case 0:printf("The number is zero");break;
            }
            break;
        default:printf("Invalid");
    }
}

