#include <stdio.h>

float calc(float num1, float num2, char ch)
{
    if (ch == '+')
    {
        printf("Result is: %f\n", num1 + num2);
    }
    else if (ch == '-')
    {
        printf("Result is: %f\n", num1 - num2);
    }
    else if (ch == '*')
    {
        printf("Result is: %f\n", num1 * num2);
    }
    else if (ch == '/')
    {
        if (num2 != 0) // Check to avoid division by zero
        {
            printf("Result is: %f\n", num1 / num2);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else
    {
        printf("Invalid operator.\n");
    }
}

int main()
{
    float num1, num2;
    char ch;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter operator: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leftover whitespace

    calc(num1, num2, ch);
    calc(num1, num2, ch);

    return 0;
}
