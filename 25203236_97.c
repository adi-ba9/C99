//Name: Adiba Tasnim, ID NO: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID NO: 25203236, Serial:19\n\n");

    int age, salary;

    printf("Enter Age :",age);
    scanf("%d",&age);

    printf("Enter Salary :",salary);
    scanf("%d",&salary);

    if(age>=30 && salary>50000)
    {
        salary+=5000;//salary = salary + 5000
    }
    else
    {
        salary+=3000;
    }
    printf("Your Final salary is : %d",salary);
}
