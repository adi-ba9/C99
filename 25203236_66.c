//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    float units,bill,surcharge,total_bill;
    printf("Enter electricity unit charges:",units);
    scanf("%f",&units);

    if(units>=1 && units<=50)
    {
       bill=units*8;
       printf("Bill=%.2f\n",bill);

    }

    else if(units>50 && units<=150)
    {
       bill=(50*8)+((units-50)*12);
       printf("Bill=%.2f\n",bill);

    }
    else if(units>150 && units<=250)
    {
       bill=(50*8)+(100*12)+((units-150)*15);
       printf("Bill=%.2f\n",bill);

    }
    else if(units>250)
    {
       bill=(50*8)+(100*12)+(100*15)+((units-250)*20);
       printf("Bill=%.2f\n",bill);

    }
    else
    {
        printf("No charges");
    }
    surcharge=(bill*20)/100;
    printf("Surcharge=%.2f\n",surcharge);

    total_bill=bill+surcharge;
    printf("Total Bill=%.2f\n",total_bill);

}





