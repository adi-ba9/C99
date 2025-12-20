//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    float maths,phy,chem,total1,total2;
    printf("Enter Marks in MATHS:",maths);
    scanf("%f",&maths);
    printf("Enter Marks in PHY:",phy);
    scanf("%f",&phy);
    printf("Enter Marks in CHEM:",chem);
    scanf("%f",&chem);

    total1=maths+phy+chem;
    printf("Total Marks in Three Subjects:%.2f\n",total1);

    total2=maths+phy;
    printf("Total Marks in Math and Physics:%.2f\n",total2);

    if(maths>=65 && phy>=55 && chem>=50)
    {
        if(total1>=180)
            printf("Eligible for Admission\n");

        else if(total2>=140)
            printf("Eligible for Admission\n");

        else
            printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not eligible For Admission");
    }
}



