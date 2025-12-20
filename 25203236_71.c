//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int i;

    for (i=1;i>0 && i<=20;i+=2)
    {
       printf("%d Odd numbers\n",i);
    }

    for (i=0;i<=20;i+=2)
    {
       if(i==0)
       {
           printf("%d Neutral\n",i);
       }
        else
       {
            printf("%d Even numbers\n",i);
       }
    }
}

