//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    float salary,HA,MA,GS;
    printf("Enter the Basic Salary:",salary);
    scanf("%f",&salary);

    if(salary<=10000)
    {
       HA=(salary*20)/100;
       MA=(salary*80)/100;

    }
    else if(salary<=20000)
    {
       HA=(salary*25)/100;
       MA=(salary*90)/100;
    }

    else if(salary>20000)
    {
       HA=(salary*30)/100;
       MA=(salary*95)/100;
    }
    else
    {
        printf("Invalid\n");
    }

       GS=salary+HA+MA;
       printf("House Allowance:%.2f\n",HA);
       printf("Medical Allowance:%.2f\n",MA);
       printf("Gross Salary:%.2f",GS);
}


