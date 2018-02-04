/* SWITCH STATEMENT

When value of a variable is successively compared against different values, use the switch statement

Syntax:
switch (expression)
{
    case value 1:
        program statement
        ...
        break;
    case value n:
        program statement
        program statement
        ...
        break;
    default:
        program statement
        ...
        break;
}



#include <stdio.h>

int main()
{
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Wednesday;

    switch(today) //expression goes in parenthesis - that's what you will evaluate
    {
        case Sunday:
            printf("Today is Sunday.");
            break;
        case Monday:
            printf("Today is Monday.");
            break;
        case Tuesday:
            printf("Today is Tuesday.");
            break;
        default:
            printf("Whatever");
            break;
    }
}


#include <stdio.h>

int main(void)
{
    float value1, value2;
    char operator;

    printf("Type in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch(operator)
    {
        case '+':
            printf("%.2f\n", value1+value2);
            break;
        case '-':
            printf("%.2f\n", value1-value2);
            break;
        case '*':
            printf("%.2f\n", value1*value2);
            break;
        case '/':
            if (value2==0)
                printf("Division by zero.\n");
            else
                printf("%.2f\n", value1/value2);
            break;
        default:
            printf("Unknown operator: %c", operator);
            break;
    }
}
*/

/*GOTO STATEMENT
Two parts: Goto & label name
goto part2  / There needs to be another statement bearing the part2 label

~~Syntax
goto label;
    .
    .
    .
    label: statement

~~Example
top: ch = getchar();
    .
    .
    .
    if (ch != 'y')
        goto top;
*/
