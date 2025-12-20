//Name: Adiba Tasnim, ID NO: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID NO: 25203236, Serial:19\n\n");

    int age, salary, res;

    printf("Enter Age :",age);
    scanf("%d",&age);

    printf("Enter Salary :",salary);
    scanf("%d",&salary);

    res = age > 18 || salary < 20000 ? printf("Salary : %d",salary): printf ("Invalid");
}
