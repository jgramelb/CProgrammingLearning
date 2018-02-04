
// CONTROL FLOW

#include <stdio.h>
/*
IF STATEMENTS

pseudo-code:
if (expression)
    program statement;
else
    program statement;


int main()
{
    int numbertotest, remainder;

    printf("Enter your number to be tested: ");
    scanf("%i", &numbertotest);

    remainder = numbertotest%2;
    if (remainder == 0){
        printf("The number is even. \n");
    }
    else{
        printf("The number is odd. \n");
    }
    return 0;


}
*/

/* ELSE IF STATEMENTS

~~~IF ELSE
pseudo-code:
if(expression 1)
    program statement 1
else
    if (expression 2)
        program statement 2
    else //Adds complexity here
        program statement 3

~~~ELSE IF
if (expression 1)
    program statement 1
else if (expression 2)
    program statement 2
else
    program statement 3



int main(void)
{
    int number, sign;

    printf("Please type in a number: ");
    scanf("%i", &number);

    if (number<0)
        sign = -1;
    else if (number ==0)
        sign = 0;
    else // MUST BE POSITIVE
        sign = 1;

    printf("Sign = %i\n", sign);

    return 0;
}

*/

/*NESTED IF-ELSE STATEMENT

if(boolean_expression 1){

    //Executes when the boolean expression 1 is true

    if (boolean_expression 2){
        //Executes when the boolean expression 2 is true
    }
}

int main()
{
    int gameIsOver = 0;
    char playerToMove = "OTHER";
    char YOU = "YOU";

    if (gameIsOver == 0)
        if (playerToMove == YOU)
            printf("Your Move\n");
        else
            printf("My move\n");
    else
        printf("The game is over\n");
}


*/

/* CONDITIONAL OPERATOR TERNARY STATEMENT

pseudo code :
    condition ? expression 1: expression 2

Conditional operator example

    x = y > 7 ? 25: 50;
    //x being set to 25, if y < 7, otherwise 50

    EQUIVALENT TO ==

    if (y>7)
        x = 25;
    else
        x = 50;
