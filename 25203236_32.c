//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int num;
    printf("Enter the number:",num);
    scanf("%d",&num);
    if(num%5==0 || num%11==0)
    {
        printf("The num is divisible\n");
    }
    else
    {
        printf("The num is not divisible");
    }
}
