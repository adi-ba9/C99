//Name: Adiba Tasnim Sadia, ID NO: 25203236

#include<stdio.h>

void main()

{
    printf("Name: Adiba Tasnim Sadia, ID NO: 25203236\n\n");

    float f,c;

    printf("Enter temperature F:");
    scanf("%f",&f);
    c=f-32/1.8;
    printf("C:%f\n",c);

    printf("Enter temperature C:");
    scanf("%f",&c);
    f=1.8*c+32;
    printf("F:%f",f);
}

