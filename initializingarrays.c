/* Initializing Arrays

Example
int counters[5] = {0,0,0,0,0};
Example
int counters[5] = {0,1,2,3,4};


Not necessary to initialize the entire array.
Remaining values not initialized are automatically set to 0.

Example: Sets the first 3 values to below, and then the remaining 497 elements to 0.
float sample_data[500] = {100.0, 300.0, 500.5};

Example: Initializing specific array elements
float sample_data[500] = {[2]=500.5, [1]=300.0, [0]=100.0};
Example:
int arr[6]={[5]=212};
*/
/*
#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for (index=0; index < MONTHS; index++)
        printf("Month %d has %2d days.\n", index+1, days[index]);

    return 0;
}
*/

/* EXAMPLE USING DESIGNATED INITIALIZERS

#include <stdio.h>
#define MONTHS 12

int main(void)
{
    int days[MONTHS]={31,28,[4]=31,30,31,[1]=29};
    int i;

    for (i=0; i < MONTHS; i++)
        printf("%2d %d\n", i+1, days[i]);

    return 0;
}

*/

/*Repeating an initial value
Easiest way to iterate through an array is to use a loop
*/

#include <stdio.h>


int main(void)
{
    int array_values[10]={0,1,4,9,16};
    int i;

    for (i=5; i < 10; ++i)
        array_values[i]=i*i;
    //Goes through entire array to show the data
    for (i=0; i<10; ++i)
        printf("array_values[%i]=%i\n", i, array_values[i]);

    return 0;
}
