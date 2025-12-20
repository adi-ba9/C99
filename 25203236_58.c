//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    char alphabet;
    printf("Enter the Alphabet(a-z)or (A-Z):",alphabet);
    scanf("%c",&alphabet);

    switch(alphabet)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
                printf("This Alphabet is a vowel");break;
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':
                printf("This Alphabet is a vowel");break;
        default:printf("This Alpahbet is a consonant");
    }
}


