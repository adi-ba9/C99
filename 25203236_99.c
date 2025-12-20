//Name: Adiba Tasnim, ID NO: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID NO: 25203236, Serial:19\n\n");

    int a, b, c;

    printf("Enter a, b and c:");
    scanf("%d %d %d",&a,&b,&c);

    switch(a!=b && b!=c && c!=a)
    {
        case 1:
            switch(a>b)
            {
                case 1:
                    switch(a>c)
                    {
                        case 1: printf("A is Max");break;
                        case 0: printf("C is Max");break;
                    }
                    break;
                case 0:
                    switch(b>c)
                    {
                        case 1: printf("B is Max");break;
                        case 0: printf("C is Max");break;
                    }
                    break;
            }
            break;
       case 0: printf("Invalid");break;

       default:printf("Invalid");
    }
}
