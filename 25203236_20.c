#include<stdio.h>
#include<math.h>

void main()

{
    float s,a,b,c,A;

    printf("Enter the value of a:",a);
    scanf("%f",&a);

    printf("Enter the value of b:",b);
    scanf("%f",&b);

    printf("Enter the value of c:",c);
    scanf("%f",&c);

    s=(a+b+c)/2;
    printf("s=%.2f\n",s);

    A=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("A=%.2f",A);
}


