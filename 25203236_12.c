//Serial:19,ID:25203236,Name:Adiba Tasnim

#include<stdio.h>

void main()
{
    printf("Seial:19,ID:25203236,Name:Adiba Tasnim\n\n");

    int a=4,b=6,c=3,d,e,f;

    d=a++ + b++ + c--;
    e=++b - c-- + ++a;
    f=a-- + c++ + --b;
    printf("D=%d\nE=%d\nF=%d",d,e,f);
}


