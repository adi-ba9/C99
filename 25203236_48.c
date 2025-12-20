//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int A,B,C;
    printf("Enter the angle A:",A);
    scanf("%d",&A);
    printf("Enter the angla B:",B);
    scanf("%d",&B);
    printf("Enter the angle C:",C);
    scanf("%d",&C);

    if(A+B+C==180 && A>0 && B>0 && C>0)
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is not valid");
    }
}

