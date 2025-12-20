//Name: Adiba Tasnim, ID NO: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID NO: 25203236, Serial:19\n\n");

    float weight, height;
    int i, n, count = 0;

    printf("Enter number of boys: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nEnter weight (kg): ");
        scanf("%f", &weight);

        printf("Enter height (cm): ");
        scanf("%f", &height);

        if (weight >= 50 || height <= 170)
        {
            count++;
            printf("Boy %d is Counted\n", i);
        }
        else
        {
            printf("Boy %d is Not Counted\n", i);
        }
    }

    printf("\nTotal counted boys = %d\n", count);
}
