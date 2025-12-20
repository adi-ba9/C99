//Serial:19,ID:25203236,Name:Adiba Tasnim

#include<stdio.h>

void main()

{
    printf("Seial:19,ID:25203236,Name:Adiba Tasnim\n\n");

    float p,v,R=8.314;
    int T,n=1;

    printf("Enter V:");
    scanf("%f",&v);

    printf("Enter T:");
    scanf("%d",&T);

    p=(n*R*T)/v;
    printf("P:%f",p);
}

