#include<stdio.h>
#include<math.h>

void main()

{
    float x1,x2,y1,y2,d;

    printf("Enter the value of x1:",x1);
    scanf("%f",&x1);

    printf("Enter the value of x2:",x2);
    scanf("%f",&x2);

    printf("Enter the value of y1:",y1);
    scanf("%f",&y1);

    printf("Enter the value of y2:",y2);
    scanf("%f",&y2);

    //d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    d=sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
    printf("D=%f",d);
}



