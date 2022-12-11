#include <stdio.h>
int main()
{   
    // Week Day
    int number;
    printf("Enter a number between 1 to 7: ");
    scanf("%d", &number);

    switch (number)
    {
    case 1:
        printf("Sunday ");

    case 2:
        printf("Monday ");

    case 3:
        printf("Tuesday ");

    case 4:
        printf("Wednesday ");

    case 5:
        printf("Thursday ");

    case 6:
        printf("Friday ");

    case 7:
        printf("Saturday ");

    default:
        printf("Invalid Number");
    }


    // Calculator 
    double a, b;
    char ch;
    printf("Enter Operator (+,/-,/*,/,/)");
    scanf("%c", &ch);
    printf("Enter two numbers");
    scanf("%lf%lf", &a, &b);
    switch (ch)
    {
    case '+':
        printf("Sum = %lf", a + b);
        break;
    case '-':
        printf("Subtraction = %lf", a - b);
        break;
    case '*':
        printf("Multiplication = %lf", a * b);
        break;
    case '/':
        printf("Division = %lf", a / b);
        break;
    default:
        printf("Invalid Choice");
    }

    return 0;
}

