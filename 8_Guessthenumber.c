
/* GUESS THE NUMBER CHALLENGER

Program will generate random number from 0 to 20
You will ask the user to guess it
    User should only be able to enter numbers from 0-20

The program will indicate to user if each guess is too high or too low
The player wins the game if they can guess the number within five tries
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int tries;
    printf("This is a guessing game. \nI have chosen a number between 0 and 20 which you must guess");
    //CREATE RANDOM NUMBER GENERATOR
        //Create time variable
    time_t t;
        //Initialize the random number generator
    srand((unsigned) time(&t));
        //Get the random number (0-20) and store in an int variable
    int randomnumber = rand() %21;
    //For reference, just to check// printf("%d ", randomnumber);

    for (int tries = 5; (tries > 0 && tries <=5) ; (tries = tries - 1))
    {
        int numberguessed;
        printf("\nTries left: %d", tries);
        printf("\nEnter a integer guess: ");
        scanf("%i", &numberguessed);

        //While the numbers guessed is NOT between 0 and 20
        while ((numberguessed < 0 || numberguessed >20)) {
            tries = tries - 1;
            printf("\n***Please enter a number between 0 and 20***");
            printf("\nTries left: %d", tries);
            if (tries == 0){
                printf("\nGAME OVER!");
                break;
            }
            printf("\nEnter a guess again: ");
            scanf("%i", &numberguessed);
        }
        //If your guess is between 0 and 20
        if (numberguessed > 0 && numberguessed <=20)
        {
            //Does you guess match up?
            if (numberguessed == randomnumber){
                printf("\nCongratulations. You guessed correctly!");
                break;
            }
            if (numberguessed > randomnumber){
                printf("\nSorry, %i is wrong. My number is less than that!", numberguessed);

            }
            if (numberguessed < randomnumber){
                printf("\nSorry, %i is wrong. My number is greater than that!", numberguessed);
            }
        }
    }
    printf("\n\n\n !!!GAME OVER!!!");
    return 0;
}
