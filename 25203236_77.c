//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int i,evensum=0,oddsum=0;

    for(i=0;i<=20;i++)
    {
        if(i==0)
        {
            printf("%d Neutral\n",i);
        }
        else if(i%2==0)
        {
            evensum = evensum + i;
            printf("When i=%d Even Sum=%d\n",i,evensum);
        }
        else if(i%2!=0)
        {
            oddsum = oddsum + i;
            printf("When i=%d Odd Sum=%d\n",i,oddsum);
        }
        else
        {
            printf("Invalid");
        }
    }

}

