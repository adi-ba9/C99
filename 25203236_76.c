//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int i;

    for(i=0;i<=20;i++)
    {
        if(i==0)
        {
            printf("%d Neutral\n",i);
        }
        else if(i%2==0)
        {
            printf("%d Even Number\n",i);
        }
        else if(i%2!=0)
        {
            printf("%d Odd Number\n",i);
        }

        else
        {
            printf("Invalid");
        }

    }
}

