
/* FOR LOOP
Finite loop

for(starting_condition; continuation_condition; action_per_iteration)
    loop_statement;

Starting condition usually initializes a variable & also the control variable
Continuation condition evaluating to true or false; if true, will execute // executed at the beginning of loop
Action per iteration is executed at the end of each loop iteration
*/
/*#include <stdio.h>
int main()
{
    for (int count = 1; count<=10; ++count)
    {
        printf("\n%d", count);
    }

}


#include <stdio.h>
int main()
{
    for (int i=1, j=2; i<=5; ++i, j=j+2)
        printf("\n%5d", i*j);
}
*/

#include <stdio.h>

int main()
{
    unsigned long long sum = 0LL;
    unsigned int count = 0;

    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);

    unsigned int i;
    for (unsigned int i = 1; i <= count ; ++i)
        sum += i;
    //for (unsigned int i = 1; i <= count ; sum += i++);
    printf("\nTotal of the first %u numbers is %llu\n", count, sum);
}
