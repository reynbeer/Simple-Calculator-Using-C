#include <math.h>
#include <stdio.h>

int main(void)
{
    printf("##########################################\n\n");
    printf("Enter 'r' for taking root and 's' for squaring.\n");
    double a, b;
    char ch;
    printf("Enter a number: ");
    scanf("%lf", &a);
    getchar();
    printf("Enter an operator: ");
    scanf("%c", &ch);
    if (ch != 'r' && ch != 's')
    {
        printf("Enter a second number: ");
        scanf("%lf", &b);
    }
    switch (ch)
    {
        case '+':
            printf("Answer: %lf\n", a + b);
            break;
        case '-':
            printf("Answer: %lf\n", a - b);
            break;
        case '*':
            printf("Answer: %lf\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Answer: %lf\n", a / b);
            else
                printf("Division by zero is not allowed.\n");
            break;
        case 's':
            printf("Answer: %.4lf\n\n", a * a);
            break;
        case 'r':
        {
            float squareroot;
            squareroot = sqrt(a);
            printf("Answer: %.4lf\n\n", squareroot);
        }
        break;
        default:
            printf("Invalid operator.\n");
    }
    printf("##########################################\n");
    return 0;
}
