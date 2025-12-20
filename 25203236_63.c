//Name: Adiba Tasnim, ID No: 25203236, Serial:19
#include<stdio.h>

void main()
{
    printf("Name: Adiba Tasnim, ID No: 25203236, Serial:19\n\n");

    char opt;
    float num1,num2;

    printf("Operator:",opt);
    scanf("%c",&opt);

    printf("Enter Number1:",num1);
    scanf("%f",&num1);

    printf("Enter Number2:",num2);
    scanf("%f",&num2);



    switch (opt)
    {
        case '+':printf("%f+%f=%f\n",num1,num2,num1+num2);break;
        case '-':printf("%f-%f=%f\n",num1,num2,num1-num2);break;
        case '*':printf("%f*%f=%f\n",num1,num2,num1*num2);break;
        case '/':switch(num2!=0)
        {
                 case 1:printf("%f/%f=%f\n",num1,num2,num1/num2);break;
                 case 0:printf("Error");break;
        }
        break;

        default:printf("Invalid");
    }
}

