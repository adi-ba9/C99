//Name: Adiba Tasnim, ID NO: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID NO: 25203236, Serial:19\n\n");

    int id,year,semester,department,serial,rem_1,rem_2;
    printf("Enter your ID:");
    scanf("%d",&id);

    year=id/1000000;//year = 25203236/1000000 = 25

    rem_1=id%1000000;//rem_1 = 25203236%1000000 = 203236
    semester=rem_1/100000;//semester = 203236/100000 = 2

    rem_2=rem_1%100000;//rem_2 = 203236%100000 = 03236
    department=rem_2/1000;//department = 03236/1000 = 03 = 3

    serial=rem_2%1000;//serial = 03236%1000 = 236

    printf("Year = 20%d\nSemester = %d\nDepartment code = 0%d\nSerial = %d",year,semester,department,serial);
}

