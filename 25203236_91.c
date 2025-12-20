//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int num,rem,rev_num=0,temp;
    printf("Enter num:",num);
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev_num=rev_num*10+rem;
        num/=10;
    }
    if(temp==rev_num)
    {
        printf("This number is palindrome\n");
    }
    else
    {
        printf("This number is not palindrome");
    }
}


