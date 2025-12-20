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

    if(A+B+C==180)
    {
        if(A==B && A==C && B==C)
        {
            printf("The triangle is equilateral\n");
        }
        else if(A==B || A==C || B==C)
        {
           printf("The triangle is isosceles\n");
        }
        else
        {
           printf("The triangle is scalene\n");
        }
    }
    else
    {
        printf("This is not triangle");
    }
}


