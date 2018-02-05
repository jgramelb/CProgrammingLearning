/*NESTED LOOPS




#include <stdio.h>

int main()
{
    int count;
    for (int i =1; i<=count ; ++i)
    {
        int sum;
        sum = 0; //Initialize sum for the inner loop

        //Calculate sum of integers from 1 to i
        for (int j=1; j<=i; ++j)
            sum +=j;
        printf("\n%d\t%d", i, sum); //Output sum of 1 to i
    }
}

#include <stdio.h>

int main()
{
    int sum;
    int j;
    int count;
    for (int i = 1; i<= count ; ++i)
    {
        sum =1 ;
        j=1;
        printf("\n1");
    //Calculate sum of integers from 1 to i
    while (j<i)
    {
        sum += ++j;
        printf(" + %d", j); //Output +j - on the same line
    }
    printf(" = %d",sum); //Output = sum
    }
}


CONTINUE STATEMENTS
Put "continue;" in the body of the loop
Skips over an iteration


#include <stdio.h>
int main()
{
    enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

    for (enum Day day = Monday; day <= Sunday; ++day)
    {
        if (day==Wednesday)
            continue;
        printf("It's not Wednesday!\n");
        //Do something useful with day
    }
}
*/

/*BREAK STATEMENT
Immediately exit from the loop it is executing
Break often used to leave a loop when there are two separate reasons to leave
Break is also used in switch statements

*/
#include <stdio.h>
int main()
{
    int p;
    int q;
    printf("\nEnter a numeric value for p: ",p);
    scanf("%d", &p);

    while (p>0)
    {
        printf("\nEnter a numeric value for q: ",q);
        scanf("%d", &q);
        while (q>0)
        {
            printf("p * q is %d\n", p*q);
            if (q>100)
                break; //break from inner loop
            printf("\nEnter a numeric value for q again: ",q);
            scanf("%d", &q);
        }
        if (q>100)
            break; //break from outer loop
        printf("\nEnter a numeric value for q again: ",q);
        scanf("%d", &p);
    }
}
