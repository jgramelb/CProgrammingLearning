/* ARRAYS
Array allows u to group values together under a single name
Array is a fixed # of data items of all same type


DECLARING AN ARRAY
Arrays are referred to as elements
Use square brackets[]

Example:
long numbers[10];
           ^^^^ Number in brackets are how many elements are in the array
           0 based arrays - start at 0, end at 9

ACCESSING AN ARRAYS ELEMENTS

arrayName[3] if you want to access the fourth value in the array


very common to use a loop to access each element in the array
for (i=0; i<10; ++i)
    printf("Number is %d", numbers[i];

If you access index value outside the range for the array, your program will crash-- array out of bounds error
Compiler cannot check for out of bounds errors

Assigning values to an Array

grades[100]=95;
              ^^ value 95 stored in element number 100
*/

#include <stdio.h>

int main(void)
{
    int grades[10]; // Create an array consisting of integer data types. There will be 10 entries.
    int count = 10;
    long sum = 0;
    float average = 0.0f;

    printf("\nEnter the 10 grades:\n");

    for (int i = 0; i<count; ++i) //Read the ten numbers to be average
    {
        printf("%2u>",i+1);
        scanf("%d", &grades[i]);  //Read a grade
        sum += grades[i];           //Add it to the sum
    }
    average = (float)sum/count;     //Average
    printf("\nAverage of the ten grades entered is:  %.2f\n", average);

    return 0;
}
