//Name: Adiba Tasnim, ID NO: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID NO: 25203236, Serial:19\n\n");

    float weight,height;

    printf("Enter weight(kg):",weight);
    scanf("%f",&weight);

    printf("Enter height(cm):",height);
    scanf("%f",&height);

    if (weight<50 && height>170)
    {
        printf("Boy is counted\n");
    }

    if (weight>50 || height<170)
    {
        printf("boy isn't counted");
    }


}


