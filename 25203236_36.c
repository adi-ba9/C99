//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int num,mod1,mod2;
    printf("Enter the number:",num);
    scanf("%d",&num);

    mod1=num%5;
    mod2=num%11;

    if(mod1==0)
    {
        printf("The num is divisible by 5\n");
    }
    else
    {
        printf("The num is not divisible by 5\n");
    }
    if(mod2==0)
    {
        printf("The num is divisible by 11\n");
    }
    else
    {
        printf("The num is not divisible by 11\n");
    }
}

