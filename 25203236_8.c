//Name: Adiba Tasnim Sadia, ID NO: 25203236

#include<stdio.h>

void main()

{
    printf("Name: Adiba Tasnim Sadia, ID NO: 25203236\n\n");

    int year;
    printf("Enter year:");
    scanf("%d",&year);
    ((year%4==0 && year%100!=0)|| (year%400==0))? printf("The year is the leap year") : printf("The year is not the leap year");
}

