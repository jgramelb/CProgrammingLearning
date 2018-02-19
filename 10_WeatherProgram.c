/*We will create a program that will use a two dimensional array in a weather program.
This program will find the total rainfall for each year, the average yearly rainfall, and the average rainfall for each month.

Input will be a 2D array with hard-coded values for rainfall amounts for the past 5 years
-Array should have 5 rows and 12 columns
-Rainfall amounts can be float type
*/

#include <stdio.h>

int main(void)
{
    //Initialize
    float sum = 0;
    int count = 0;

    int i;
    int j;

    float rainfall[5][12] =
    {
       {1,1,1,1,1,1,1,1,1,1,1,1},
       {2,2,2,2,2,2,2,2,2,2,2,2},
       {3,3,3,3,3,3,3,3,3,3,3,3},
       {4,4,4,4,4,4,4,4,4,4,4,4},
       {5,5,5,5,5,5,5,5,5,5,5,5}
    };
    /* HERE'S THE CODE TO SCAN FOR THE VALUES:
    for (i = 0; i <5; i++)
    {
        for (j = 0; j < 12; j++)
        {
            printf("Enter value for rainfall[%i][%j]", i,j);
            scanf("%f", &rainfall[i][j]);
        }
        printf("\n");
    }
    */

    //PRINT THE ARRAY THAT YOU'VE HARD CODED OR ENTERED
    printf("The array you entered was: \n");
    for (i = 0; i <5; i++)
    {
        for (j = 0; j < 12; j++)
        {
            printf("%.2f  ", rainfall[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");


    //NOW HERE WE WILL CODE TO FIGURE OUT THE AVERAGE AND SUM FOR MONTH OR YEAR

    //Initialize for year, month, totals~
    int year;
    int month;
    float totalinchrain;
    float inchrain;

    //Show how much total rainfall in each year
    printf("YEAR \t\t   RAINFALL (IN INCHES)\n");
    for (year = 0, totalinchrain = 0; year < 5; year++)
    {
        for (month = 0, inchrain = 0; month < 12; month++)
        {
            //Inch rain is how much rainfall there was in that specific year
            inchrain = inchrain + rainfall[year][month];
        }
        //Print out the year with its corresponding rainfall
        printf("%d \t%15.1f\n", 2010+year, inchrain);
        //Calculate the total inches of rain in all five years
        totalinchrain = totalinchrain + inchrain;
    }
    //Show the calculation of average
    printf("\nThe yearly average is %.2f inches.\n\n", totalinchrain/5);

    //We will be printing out the monthly average
    printf("MONTHLY AVERAGES\n\n");
    //Print out the months
    printf("Jan    Feb    Mar    Apr    May    June   Jul    Aug    Sept   Oct    Nov    Dec\n");

    //We will be calculating how much rain there was in each month (column)
    for (month = 0; month < 12; month++)
    {
        for (year = 0, inchrain = 0; year < 5 ; year++)
        {
            inchrain = inchrain + rainfall[year][month];
        }
        printf("%4.1f   ", inchrain/5);
    }
    printf("\n");
    return 0;
}
