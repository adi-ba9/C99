//Name: Adiba Tasnim, ID No: 25203236, Serial:19, Problem: Sum of (1 to 5)
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int i,sum=0;
    for(i=1;i<=5;i++)
    {
        sum =sum+i;
        printf("when i=%d Sum = %d\n",i,sum);
    }
    printf("\nTotal Sum = %d\n",sum);
}

