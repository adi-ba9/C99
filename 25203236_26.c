//Name: Adiba Tasnim, ID NO: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID NO: 25203236, Serial:19\n\n");
    int days=999, logic1=30, logic2=365, year, month, remaining_day, day;
    year= days/logic2;
    day= days%logic2;
    month=day/logic1;
    remaining_day=day%logic1;
    printf("year=%d\n month=%d\n remaining_day=%d",year, month, remaining_day);
}
