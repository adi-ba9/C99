//Name: Adiba Tasnim, ID NO: 25203236, Serial:19
#include<stdio.h>
#include<math.h>
#define PI 3.1416

void main()
{
    printf("Name: Adiba Tasnim, ID NO: 25203236, Serial:19\n\n");

    float x,y,a,b,r,C,A;

    printf("Enter the value of x:",x);
    scanf("%f",&x);

    printf("Enter the value of y:",y);
    scanf("%f",&y);

    printf("Enter the value of a:",a);
    scanf("%f",&a);

    printf("Enter the value of b:",b);
    scanf("%f",&b);

    //r=sqrt(((x-a)*(x-a))+((y-b)*(y-b)));
    r=sqrt((pow((x-a),2))+(pow((y-b),2)));
    printf("r=%.2f\n",r);

    C=2*PI*r;
    printf("C=%.2f\n",C);

    A=PI*r*r;
    printf("A=%.2f",A);
}




