//Serial:19,ID:25203236,Name:Adiba Tasnim

#include<stdio.h>
#include<math.h>
#define PI 3.1416

void main()
{
    printf("Seial:19,ID:25203236,Name:Adiba Tasnim\n\n");

    float a1=2,a2=5,b1=2,b2=6,d,r,c,a;

    d=sqrt(pow((a1-a2),2)+ pow((b1-b2),2));

    r=d/2;
    c=2*PI*r;
    a=PI*r*r;

    printf("d=%f\n",d);
    printf("r=%f\n",r);
    printf("C=%f\n",c);
    printf("A=%f",a);
}
