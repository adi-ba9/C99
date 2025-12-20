//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    char alphabet;
    printf("Enter the Alphabet:",alphabet);
    scanf("%c",&alphabet);

    if((alphabet>='a'&& alphabet<='z')||(alphabet>='A' && alphabet<='Z'))
    {
        if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u')
            {
                printf("Alphabet is a vowel\n");
            }
        else if(alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U')
            {
                printf("Alphabet is a vowel\n");
            }
        else
            {
                printf("Alphabet is a consonant\n");
            }

    }

    else
    {
        printf("Invalid");
    }
}

