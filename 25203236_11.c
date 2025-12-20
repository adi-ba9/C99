//Serial:19,ID:25203236,Name:Adiba Tasnim

#include<stdio.h>

void main()
{
    printf("Seial:19,ID:25203236,Name:Adiba Tasnim\n\n");

    int logic1=7,logic2=30, logic3=365,years,months,weeks,day,days,remaining_day1,remaining_day2;

    printf("Enter the number of Days:");
    scanf("%d",&days);

    years= days/logic3;
    remaining_day1= days%logic3;

    months=remaining_day1/logic2;
    remaining_day2=remaining_day1%logic2;

    weeks=remaining_day2/logic1;

    day=remaining_day2%logic1;

    printf("\n %d Years\n %d Months\n %d Weeks\n %d Day", years, months, weeks, day);
}

