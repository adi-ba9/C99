//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>
#include<math.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    float a,b,c,D,r1,r2,r,ri;
    printf("Enter the value of a:",a);
    scanf("%f",&a);
    printf("Enter the value of b:",b);
    scanf("%f",&b);
    printf("Enter the value of c:",c);
    scanf("%f",&c);

    D=b*b-(4*a*c);
    printf("D=%.2f\n\n",D);

    if(D>0)
    {
        r1=(-b+sqrt(D))/(2*a);
        r2=(-b-sqrt(D))/(2*a);
        printf("Roots are real and different\n\n");
        printf("Root1=%.2f\n\n",r1);
        printf("Root2=%.2f\n",r2);

    }
    else if(D==0)
    {
        r1=(-b+sqrt(D))/(2*a);                                                                                                                               //r1=(-b+0)/(2*a)=-b/(2*a)
        r2=(-b-sqrt(D))/(2*a);                                                                                                                               //r2=(-b-0)/(2*a)=-b/(2*a)
        printf("Roots are real and equal\n\n");
        printf("Root1=%.2f\n\n",r1);
        printf("Root2=%.2f\n",r2);
    }
    else
    {                                                                                                                                                        //ri=(sqrt(-D)/(2*a)) : D<0;D=-(x);imaginary part=sqrt(D)/2a || =(sqrt(-(x)))/2a =((sqrt(x))*(sqrt(-1)))/2a || =((sqrt(x))*i)/2a ;as D=-(x)is actually D=i(x);so ri=(sqrt(x)i)/2a =(sqrt(-(-(x)))i)/2a =(sqrt(-(D))i)/2a =(sqrt(-D)i)/2a;But i cant be given into calculation part,that's why ri=(sqrt(-D))/2a;
        r=(-b/(2*a));
        ri=(sqrt(-D)/(2*a));
        printf("Roots are imaginary\n\n");
        printf("Root1=%.2f+%.2fi\n\n",r,ri);
        printf("Root2=%.2f-%.2fi\n",r,ri);
    }
}



