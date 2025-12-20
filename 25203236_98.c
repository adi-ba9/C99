//Name: Adiba Tasnim, ID NO: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID NO: 25203236, Serial:19\n\n");

    int age, salary;
    char gender;

    printf("Enter your Gender(M/F):");
    scanf("%c",&gender);

    printf("Enter your Age :");
    scanf("%d",&age);

    printf("Enter your Salary :");
    scanf("%d",&salary);

    if(gender=='M' || gender=='m')
    {
        if(age>50)
        {
            if(salary>50000)
            {
                salary+=10000;
            }
            else
            {
                salary+=5000;
            }
        }

        else
        {
            salary+=3000;
        }
    }
    else if(gender=='F' || gender=='f')
    {
        if(age>40)
        {
            if(salary>40000)
            {
                salary+=8000;
            }
            else
            {
                salary+=4000;
            }
        }
        else
        {
            salary+=2000;
        }
    }
    else
    {
        printf("Invalid Input");
    }
    printf("Yout salary is : %d",salary);
}

