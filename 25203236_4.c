//Serial:19,ID:25203236,Name:Adiba Tasnim

#include<stdio.h>

void main()

{
    printf("Seial:19,ID:25203236,Name:Adiba Tasnim\n\n");

    float f,r,G=6.6743;
    int m1,m2;

    printf("Enter M1:");
    scanf("%d",&m1);

    printf("Enter M2:");
    scanf("%d",&m2);


    printf("Enter r:");
    scanf("%f",&r);

    f=(G*m1*m2)/(r*r);
    printf("F:%f",f);
}
