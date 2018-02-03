/*This program will ask the user for a number of minutes via terminal
    and will display as output the minutes, the minutes equivalent in years, and the minutes equivalent in days

    60 minutes = 1 hour ==> 24hours = 1 day ==> 365 days == 1 year.
*/

#include <stdio.h>

int main()
{
    double minutes;
    double minutestodays;
    double minutestoyear;

    //Ask user to enter number of minutes and tells user how many minutes they have entered
    printf("Please enter number of minutes: ");
    scanf("%lf", &minutes);                             //%lf format specifier to read doubles
    printf("Minutes entered: %lf\n", minutes);

    minutestodays = minutes/(60*24) ;
    printf("The %lf minutes entered to days is: %lf\n", minutes, minutestodays);

    //Conversion minutes to year
    minutestoyear = minutes/(60*24*365);
    printf("The %lf minutes entered to years is: %lf\n", minutes, minutestoyear);

    return 0;
}
