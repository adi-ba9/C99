//Serial:19,ID:25203236,Name:Adiba Tasnim

#include<stdio.h>

void main()
{
    printf("Seial:19,ID:25203236,Name:Adiba Tasnim\n\n");

    float marks;
    printf("Enter the mark:",marks);
    scanf("%f",&marks);

    (marks>=90)? printf("A+"):(marks>=80)? printf("A"):(marks>=70)? printf("B"):(marks>=60)? printf("C"):(marks>=50)? printf("D"):printf("F");

}
