#include <stdio.h>

float calc(float num1, float num2, char ch)
{
    if (ch == '+')
    {
        return num1 + num2;
    }
    else if (ch == '-')
    {
        return num1 - num2;
    }
    else if (ch == '*')
    {
        return num1 * num2;
    }
    else if (ch == '/')
    {
        if (num2 != 0)
        {
            return num1 / num2;
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
            return 0;
        }
    }
    else
    {
        printf("Invalid operator.\n");
        return 0;
    }
}

int main()
{
    float num1, num2, result;
    char ch;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter operator: ");
    scanf(" %c", &ch);

    result = calc(num1, num2, ch);
    printf("Result: %.2f\n", result);

    return 0;
}
