//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>
#include<math.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    float a,b,c,D,r1,r2,r,ri;

    printf("Enter a:",a);
    scanf("%f",&a);

    printf("Enter b:",b);
    scanf("%f",&b);

    printf("Enter c:",c);
    scanf("%f",&c);

    D=(b*b)-(4*a*c);
    printf("D=%.2f\n",D);

    switch(D>0)
    {
        case 1:r1=(-b+sqrt(D))/(2*a);
               r2=(-b-sqrt(D))/(2*a);
               printf("Roots are real and different\n\n");
               printf("Root1=%.2f\n\n",r1);
               printf("Root2=%.2f\n",r2);break;
        case 0:switch(D==0)
        {
           case 1:r1=(-b+sqrt(D))/(2*a);
                  printf("Roots are real and equal\n\n");
                  printf("Root1=%.2f\n\n",r1);
                  printf("Root2=%.2f\n",r2);break;
           case 0:r=(-b/(2*a));
                  ri=(sqrt(-D)/(2*a));
                  printf("Roots are imaginary\n\n");
                  printf("Root1=%.2f+%.2fi\n\n",r,ri);
                  printf("Root2=%.2f-%.2fi\n",r,ri);break;

        }
        break;
        default:printf("Invalid");

    }
}
