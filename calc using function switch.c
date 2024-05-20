#include <stdio.h>

float calc(float num1, float num2, char ch)
{
    switch (ch)
    {
    case'+':
        printf("Result is :%f",num1+num2) ;
        break;
    case'-':
        printf("Result is :%f",num1-num2) ;
        break;
    case'*':
        printf("Result is :%f",num1*num2) ;
        break;
    case '/':
       if (num2 != 0)
       {
        printf("Result is:%f",num1/num2);
       }
    else
       {
        printf("Error: Division by zero.\n");

       }
    default:
        printf("Error: Invalid operator.\n");

    }
}

int main()
{
    float num1, num2;
    char ch;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter operator: ");
    scanf(" %c", &ch);

    calc(num1, num2, ch);


    return 0;
}

