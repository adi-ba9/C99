//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int num;
    printf("Enter the Number:",num);
    scanf("%d",&num);

    switch(num%2==0)
    {
        case 1 :printf("The number is Even");break;
        case 0 :printf("The number is odd");break;
        default:printf("Invalid");
    }
}
