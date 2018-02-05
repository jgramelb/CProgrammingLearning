
/*WHILE LOOP
Allows execution to continue for as long as a specified logical expression evalues to true

~~~Pseudocode
While this condition is true
    Keep on doing this

While you are hungry
    Eat sandwiches

~~~General Syntax
while (expression)
    statement1;

OR

while(expression)
{
    statement1;
    statement2;
}



#include <stdio.h>

int main(void)
{
    int count = 1;

    while (count<=5){
        printf("%i\n", count);
        ++count;
    }

    return 0;
}


#include <stdio.h>
int main(void)
{
    int num = 0;
    scanf("%d", &num);

    while (num != -1)
    {
        //loop actions
        scanf("%d",&num);
    }
}
*/

/*DO-WHILE LOOP
The body is executed for the first time unconditionally
-Always guaranteed to execute at least once
-Condition is at the bottom (post-test loop)

do
    statement
while (expression);

do
{
    prompt for password
        read user input
}
    while (input not equal to password);

*/
/*
#include <stdio.h>
int main()
{
    int number;
    do
        scanf("%d", &number);
    while (number != 20);

}


#include <stdio.h>

int main(void)
{
    int number = 5;
    do
    {
        printf("\nNumber = %d", number);
        number++;
    }
    while(number<4);

}
*/

/*
for (;test;)
==IS THE SAME AS
while(test)


~~~syntax~~~
initialize;

while(test)
{
    body;
    update;
}

~~~logic controlled loops~~~
while (scanf("%l", &num)==1)

for(count = 1; count <=100; count ++
*/
