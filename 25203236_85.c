#include <stdio.h>
void main()

{
    char opt;
    float num1, num2;
    printf("Enter value (a*b):",num1,opt,num2);
    scanf("%f %c %f",&num1,&opt,&num2);

    switch(opt)
    {
        case '+': printf("%.2f + %.2f = %.2f\n",num1,num2,num1+num2);break;
        case '-': printf("%.2f - %.2f = %.2f\n",num1,num2,num1-num2);break;
        case '*': printf("%.2f * %.2f = %.2f\n",num1,num2,num1*num2);break;
        case '/': if (num2!=0)
        {
            printf("%.2f / %.2f = %.2f\n",num1,num2,num1/num2);
        }
                 else
                    {
                        printf("Error\n");break;
                    }
        default : printf("Invalid Input");
    }

}
