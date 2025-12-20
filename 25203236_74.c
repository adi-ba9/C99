//Name: Adiba Tasnim, ID No: 25203236, Serial:19, Problem: Sum of (100 to 90)
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int i,sum=0;
    for(i=100;i>=90;i--)
    {
        sum =sum+i;
        printf("when i=%d Sum = %d\n",i,sum);
    }
    printf("\nTotal Sum = %d\n",sum);
}

