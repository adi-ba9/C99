//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    float a,b,c,d,result;
    printf("Enter the value of a:",a);
    scanf("%f",&a);
    printf("Enter the value of b:",b);
    scanf("%f",&b);
    printf("Enter the value of c:",c);
    scanf("%f",&c);
    printf("Enter the value of d:",d);
    scanf("%f",&d);


    if((c-d)!=0)
    {
        result=(a+b)/(c-d);
        printf("Result=%.2f\n",result);
    }

    else
    {
        printf("Result can't be printed");
    }
}



