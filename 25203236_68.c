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
        printf("Character is Alphabet\n");
    }
    else if(character>='0' && character<='9')
    {
        printf("Character is Digit\n");
    }
    else
    {
        printf("Character is a special character");
    }

}
