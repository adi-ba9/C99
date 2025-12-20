//Name: Adiba Tasnim, ID NO: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID NO: 25203236, Serial:19\n\n");

    int Final_mark,marks,bonus_mark;
    char catagory;

    printf("Enter marks:",marks);
    scanf("%d",&marks);

    printf("Enter Bonus mark:",bonus_mark);
    scanf("%d",&bonus_mark);

    printf("Enter the catagory:",catagory);
    scanf(" %c",&catagory);

    Final_mark=marks+bonus_mark;

    if (catagory=='S' || catagory=='s')
    {
        printf("Final mark=%d\n",Final_mark);
    }

    if(catagory!='S' && catagory!='s')
    {
        printf("Final mark=%d\n",marks);
    }


}
