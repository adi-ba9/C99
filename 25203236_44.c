//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    char character;
    printf("Enter the character:",character);
    scanf("%c",&character);

    if((character>='A' && character<='Z') || (character>='a' && character<='z'))
    {
        printf("Character is an Alphabet\n");
    }
    else
    {
        printf("character is not an Alphabet");
    }
}
