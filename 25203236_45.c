//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    char alphabet;
    printf("Enter the Alphabet:",alphabet);
    scanf("%c",&alphabet);

    if(alphabet>='A' && alphabet<='Z')
    {
        printf("Alphabet is Uppercase\n");
    }
    else if(alphabet>='a' && alphabet<='z')
    {
        printf("Alphabet is Lowercase\n");
    }
    else
    {
        printf("Invalid");
    }
}

