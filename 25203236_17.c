//Serial:19,ID:25203236,Name:Adiba Tasnim

#include<stdio.h>

void main()
{
    printf("Seial:19,ID:25203236,Name:Adiba Tasnim\n\n");

    char c;
    printf("Enter the character:",c);
    scanf("%c",&c);

    (c>='A' && c<='Z')||(c>='a' && c<='z')? printf("Alphabet"): printf("This is not Alphabet");
}
