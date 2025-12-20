//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    int salary,HRA,DA,GS;
    printf("Enter the Basic Salary:",salary);
    scanf("%d",&salary);

    if(salary<=10000)
    {
       HRA=(salary*20)/100;
       DA=(salary*80)/100;
       GS=salary+HRA+DA;
       printf("HRA:%d\n",HRA);
       printf("DA:%d\n",DA);
       printf("Gross Salary:%d\n",GS);

    }
    else if(salary<=20000)
    {
       HRA=(salary*25)/100;
       DA=(salary*90)/100;
       GS=salary+HRA+DA;
       printf("HRA:%d\n",HRA);
       printf("DA:%d\n",DA);
       printf("Gross Salary:%d\n",GS);
    }

    else if(salary>20000)
    {
       HRA=(salary*30)/100;
       DA=(salary*95)/100;
       GS=salary+HRA+DA;
       printf("HRA:%d\n",HRA);
       printf("DA:%d\n",DA);
       printf("Gross Salary:%d\n",GS);
    }
    else
    {
        printf("Invalid");
    }
}

