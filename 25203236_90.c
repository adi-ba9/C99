//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int num,rem,rev_num=0,sum=0;
    printf("Enter num:",num);
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev_num=rev_num*10+rem;
        num/=10;
        sum+=rem;
    }
    printf("Reverse Number:%d\n",rev_num);
    printf("Sum=%d",sum);
    }


